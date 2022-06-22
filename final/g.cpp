#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<int,int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo[t]++;    
    }
    int max=0;
    for(auto i:foo){//1 2 3 3
        if(max<i.first){
            max=i.first;    
        }
    }
    for(auto i:foo){
        if(max==i.first){
            cout<<i.second<<endl;
        } 
    }
}