#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    int i,j;
    for(int i=0;i<n;i++){
        j=n-1-i;
        sum+=a[i][j];
                  
    }
    cout<<sum;
}