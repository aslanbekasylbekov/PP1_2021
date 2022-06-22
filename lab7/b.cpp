#include <bits/stdc++.h>
using namespace std;
string bin(int n){
    if(n==0) return "";
    return char(n%2+48)+bin(n/2);
}
int main(){
    int n; cin>>n;
    string s=bin(n);
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
}