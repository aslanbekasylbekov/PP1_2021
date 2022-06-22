#include <bits/stdc++.h>
using namespace std;
 int main(){
    int n; cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            cout<<"Instead of "<<a[n-1-i]<<" here was "<<a[i]<<endl;
        }else{
            cout<<"OK"<<endl;
        }
    }
}