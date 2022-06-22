#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo.push_back(t);
    }
    int a,b; cin>>a>>b;
    foo.erase(foo.begin()+a,foo.begin()+b+1);
    for(auto i:foo){
        cout<<i<<" ";
    }
}