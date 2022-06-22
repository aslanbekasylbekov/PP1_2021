#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' and s[i]<='9'){
                continue;
            }
            res+=s[i];
        }
        cout<<res<<endl;
    }
    return 0;
}    