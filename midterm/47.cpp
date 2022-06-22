#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    bool isPalin=true;
    for(int i = 0 ; i<s.size()/2;i++)   
        if(s[i]!=s[s.size()-1-i])  isPalin=false;  

    if(isPalin) cout<<s[i];    
    else cout<<"NO";
    
    return  0;
}