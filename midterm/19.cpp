#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    for(int i=a;i<=b;i++){
        string s=to_string(i);
        for(int j=0;j<s.size();j++){
            if(s[j]=='5') {
                cout<<s<<" ";
                break;
            }
        }
    }
}