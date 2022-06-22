#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    //156184138541221   =>    1111568438422    
    int cnt=0;
    for(int i = 0 ; i<s.size();i++){
        if(s[i]=='1') cnt++;
    }
    for(int i = 0 ; i<cnt;i++){
        cout<<'1';
    }
    for(int i = 0 ; i<s.size();i++){
        if(s[i]=='1') continue;
        else cout<<s[i];
    }
    return 0;
}