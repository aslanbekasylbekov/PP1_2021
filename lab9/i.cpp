#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map <string,int>foo;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        if(foo[s]==0){
            cout<<"new user added\n";
            foo[s]=1;
        }else{
            cout<<"user already exists\n";
        }
    }
}