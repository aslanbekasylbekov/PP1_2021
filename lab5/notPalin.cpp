#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int n=s.size();
    bool isPalin=true;
    string helper="";
    for(int i = 1 ; i<n;i++){
        helper+=s[i];
    }
    for(int i = 0; i<(n-1)/2;i++)   {
        if(helper[i]!=helper[n-i-2])  isPalin=false;  
    }
    if(isPalin) cout<<"YES";    
    else cout<<"NO";
    
    return  0;
}