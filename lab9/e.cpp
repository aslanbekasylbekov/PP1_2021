#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map <string,int> foo;
    int cnt=0;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        foo[s]++;
    }
    for(auto i:foo){
        if(i.second==3){
            cnt++;
        }
    }
    cout<<cnt;
    
}