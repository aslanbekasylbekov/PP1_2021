#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==1) return false;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n; cin>>n;
    vector <int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo.push_back(t);
    }
    int cnt=0;
    int k;cin>>k;
    for(int i=0;i<n;i++){
        if(foo[i]>k && prime(foo[i])) cnt++;
    }
    cout<<cnt;
}