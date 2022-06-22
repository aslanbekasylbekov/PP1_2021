#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    map <int,int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo[t]++;
    }
    cout<<foo[k]<<" ";
}