#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int n=s.size();
    bool isPalin=true;

    for(int i = 0 ; i<n/2;i++)   
        if(s[i]!=s[n-1-i])  isPalin=false;  

    if(isPalin) cout<<"YES";    
    else cout<<"NO";
    
    return  0;
}