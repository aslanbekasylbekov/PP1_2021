#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<string,set<int>> foo;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        int k; cin>>k;
        foo[s].insert(k);
    }
    for(auto i:foo){
        cout<<i.first<<" ";
        if(i.second.size()<3){
            cout<<"NO BONUS\n";
        }else cout<<"+1\n";
    }
}