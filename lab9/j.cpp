#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string,int> foo;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        int k; cin>>k;
        foo[s]+=k;
    }
    for(auto i:foo){
        cout<<i.first<<" "<<i.second<<endl;
    }
}