#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    char c; cin>>c;
    int x;  cin>>x;
    int n=s.size();
    int cnt=0;
    for(int i = 0 ; i< n;i++){
        if(s[i]==c) cnt++;
    }
    if(cnt==x)  cout<<"YES";
    else cout<<"NO";

    return 0;
}