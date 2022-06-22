#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set <int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo.insert(t);
    }
    for(auto i:foo){
        if(i%2==1) cout<<i<<" ";
    }
}