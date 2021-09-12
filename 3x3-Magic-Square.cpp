/*
3x3-Magic-Square
C++による3×3魔方陣（三方陣）の解法
https://neguse-atama.hatenablog.com
*/
#include<bits/stdc++.h>
using namespace std;
int main(void){
    int ans[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ans[i][j]=0;
        }
    }
    ans[1][1]=5;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(ans[i+1][j+1]==5){
                ans[i][j]=8;
                ans[i+2][j+2]=2;
            }else if(ans[i+1][j-1]==5){
                ans[i][j]=6;
                ans[i+2][j-2]=4;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(ans[i][j]==0){
                if(j==0){
                    ans[i][j]=15-ans[i-1][j]-ans[i+1][j];
                    ans[i][j+2]=10-ans[i][j];
                }
                if(i==0){
                    ans[i][j]=15-ans[i][j-1]-ans[i][j+1];
                    ans[i+2][j]=10-ans[i][j];
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j];
            cout<<((j==2) ? "\n" : " ");
        }
    }
    return 0;
}