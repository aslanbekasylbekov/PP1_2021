#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    stack <char> foo;
    bool res=true;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z') {
            continue;
        }
    }        
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            foo.push(s[i]);
        }else if(s[i]=='}'|| s[i]==']' || s[i]==')'){
            if(!foo.empty()){
                if((s[i]=='}' and foo.top()=='{') || (s[i]==']' and foo.top()=='[') || (s[i]==')' and foo.top()=='(') ) foo.pop();
            }else{
                res=false;
                break;
            }
        }      
    }
    if(res==false || !foo.empty()){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

}