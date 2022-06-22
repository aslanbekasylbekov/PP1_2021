#include <bits/stdc++.h>
using namespace std;
int rev(int num){
    int res=0;
    while(num!=0){
        res*=10;
        res+=num%10;
        num/=10;
    }returne
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}