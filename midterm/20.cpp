#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int a=char(s[0]-48);
    int sum=0;
    for(int i=1;i<s.size();i++){
        sum+=char(s[i]-48);
    }
    if(sum%10==a){
        cout<<"YES";
    }else {
        cout<<"NO";
    }
}