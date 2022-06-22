#include <bits/stdc++.h>
using namespace std;
string bin(int n){
    if(n==1) return "1";
    if(n==0) return "0";
    return char(n%2+48)+bin(n/2); 
}
int main(){
    int n; cin>>n;
    int o=0;
    int z=0;
    string s=bin(n);
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='0') z++;
        if(s[i]=='1') o++;
    }
    cout<<s<<endl;
    cout<<"zeros "<<z<<endl;
    cout<<"number of units "<<o;
}