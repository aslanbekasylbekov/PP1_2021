#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    stack<char> foo;

    for(int i=0;i<s.size();i++){
        if(foo.empty()){
            foo.push(s[i]);
        }else if(!foo.empty()){
            int n=(foo.top()-48)*10+(s[i]-48);
            if(int(sqrt(n))*int(sqrt(n))==n){
                foo.pop();
            }else{
            foo.push(s[i]);
            }
        }
    }
    if(foo.empty()){
        cout<<"Stack is empty"<<endl;
    }
    while(!foo.empty()){
        cout<<foo.top();
        foo.pop();
    }
    cout<<endl;
}