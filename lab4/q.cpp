#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][2*n-1];
    for(int i = 0 ; i <n;i++){
        for(int j =0  ;j<2*n-1;j++){
            a[i][j]='*';
        }
    }
    for(int i = 0 ; i <n;i++){
        for(int j =0  ;j<(2*n-1)/2;j++){
            if((i+j)<n-1)  {
                a[i][j]='.';
                a[i][2*n-2-j]='.';
            } 
        }
    }
    for(int i = 0 ; i <n;i++){
        for(int j =0  ;j<2*n-1;j++){
            cout<<a[i][j];
        }cout<<endl;
    }
}