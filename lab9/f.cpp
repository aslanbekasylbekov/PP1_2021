#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    stack <char> foo;
    bool res=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            foo.push('(');
        }else if(s[i]==')'){
            if(!foo.empty()){
                foo.pop();
            }else{
                res=false;
            }
        }
    }if(res==false || !foo.empty()){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}