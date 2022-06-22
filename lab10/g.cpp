#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map<pair<pair<string,int>,pair<string,int>>,int>foo;
    string n1,n2;
    int s1,s2;
    for(int i=0;i<n;i++){
        cin>>n1>>s1>>n2>>s2;
        foo[make_pair(make_pair(n1,s1),make_pair(n2,s2))]=s1+s2;
    }
    for(auto i:foo){
        cout<<i.first.first.first<<" "<<"and"<<" "<<i.first.second.first<<" "<<i.second<<endl;
    }
}