#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int n=s.size();
    for(int i = 0 ; i<n;i++ ){
        if(s[i]=='z')   s[i]='a';
        else{
            s[i]=char(int(s[i])+1);
        }
    }

    cout<<s;
    return 0;
}