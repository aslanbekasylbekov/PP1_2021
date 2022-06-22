#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    bool increasing=true;
    int n=s.size();
    for(int i = 0 ; i<n-1;i++ ) 
        if(s[i]>s[i+1]) increasing=false;
    if(increasing)  cout<<"YES";
    else cout<<"NO";

    return 0;
}