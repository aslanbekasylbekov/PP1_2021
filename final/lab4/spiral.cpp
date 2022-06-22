#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int num=1;
    int i=0,j=0;
    while(num<=n*n){
        while(j<=n-1-i) a[i][j++]=num++;
        i++;j--;//j=n-1
        while(i<=j) a[i++][j]=num++;
        i--;j--;//i=n-1
        while(j>=n-i-1) a[i][j--]=num++;
        i--;j++;//i=n-2
        while(i>=j+1) a[i--][j]=num++;
        i++;j++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}