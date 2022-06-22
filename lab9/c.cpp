#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<int,int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo[t]++;
    }
    int cnt=0;
    for(auto i:foo){
        if(i.second>1) cnt++;
    }
    cout<<cnt<<endl;
}