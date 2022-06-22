#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    set <char> foo;
    for(int i=0;i<s.size();i++){
        foo.insert(tolower(s[i]));//улкен арипти курттай етеди
    }
    cout<<foo.size()<<endl;
    for(auto i: foo){
        cout<<i<<" ";
    }
}