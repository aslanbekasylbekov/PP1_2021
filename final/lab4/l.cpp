#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int min=1e9,sum=0;
    cout<<"coordinates of min elements:\n";
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(a[i][j]<min){
               x=i+1;
               y=j+1;
               min=a[i][j];
            }    
        }
        sum+=min;
        cout<<x<<";"<<y<<endl;
        min=1e9;
    }
    cout<<"Their sum:\n"<<sum;
}