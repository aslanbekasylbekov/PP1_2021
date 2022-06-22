#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    stack<char> foo;
    bool res=true;   
    for(int l=0;l<n+1;l++){
        string s; getline(cin,s);
        for(int i=0;i<int(s.size());i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['|| s[i]=='<'){
                foo.push(s[i]);
            }else if(s[i]==')' || s[i]=='}' || s[i]==']'||s[i]=='>'){
                if(!foo.empty()){
                    if((s[i]==')'&& foo.top()=='(') || (s[i]=='}'&& foo.top()=='{') ||(s[i]==']' && foo.top()=='[')||(s[i]=='>' && foo.top()=='<')) foo.pop();
                }else{
                res=false;
                }   
            }
        }    
    }
    if(!foo.empty() || res==false) cout<<"NO";
    else cout<<"YES";
    return 0;
}