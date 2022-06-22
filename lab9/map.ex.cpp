#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    string s; cin>>s; //abcabc123
    map <char,int> foo;
    for(int i=0;i<s.size();i++){
        foo[s[i]]++;
    }
    for(auto i: foo){
        cout<<i.first<<"="<<i.second<<endl;
    }
}