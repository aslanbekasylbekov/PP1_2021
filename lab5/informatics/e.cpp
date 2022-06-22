#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=0;
    for(int i=0;i<s.size();i++){
        if(' '==s[i])
        n++;
        
    }
    cout<<n+1;
}    