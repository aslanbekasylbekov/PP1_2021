#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;    cin>>n>>m;
    int a[n][m]; 
    bool isCool=true;
    for(int i = 0 ; i< n;i++)
        for(int j = 0 ; j< m;j++)
            cin>>a[i][j];
    for(int i = 0 ; i< n;i++){
        for(int j = 0 ; j< m;j++){
            if(a[i][j]==a[i+1][j] && a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j+1])   isCool=false;
        }
    }
    if(isCool)  cout<<"YES";
    else cout<<"NO";
    return 0;
}