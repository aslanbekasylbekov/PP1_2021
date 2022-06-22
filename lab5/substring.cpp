#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;   cin>>s1>>s2;
    bool substring=false;
    string helper="";
    for(int i = 0 ; i<=s1.size()-s2.size();i++){
        for(int j = i ; j< i+s2.size();j++){
            helper+=s1[j];
        }
        if(helper==s2)  substring=true;

        helper="";
    }

    if(substring)   cout<<"YES";
    else cout<<"NO";
    return 0;
}   