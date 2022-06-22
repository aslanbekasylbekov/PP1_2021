#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> foo;
    int n;  cin>>n;
    for(int i = 0 ; i< n;i++){
        string login,pass; cin>>login>>pass;
        foo[login]=pass;
        foo[pass]=login;
    }
    int m; cin>>m;
    for(int i=0;i<m;i++){
        string login,pass; cin>>login>>pass;
        if(foo.count(login)){
            if(foo[login] != pass){
                cout<<"password error\n";
            }
            else{
                cout << "correct password\n";
            }
        }
        else if(foo.count(pass)){
            if(foo[pass] != login){
                cout<<"login error\n";
            }
            else{
                cout << "correct password\n";
            }
        }
        else cout<<"login error\n";
    }
}