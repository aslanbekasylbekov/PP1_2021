#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> foo;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(foo[s]==0){
            foo[s]=i;
            foo[s]++;
        }
    }
    for(auto i:foo){
        cout<<i.first<<" "<<i.second<<endl;
    }
}