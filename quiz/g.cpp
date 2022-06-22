#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int small=0,capital=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z'){
            capital++;
        }
        else if(s[i]>='a' and s[i]<='z'){
            small++;
        }
    }
    cout<<min((capital*a),(small*b));
}