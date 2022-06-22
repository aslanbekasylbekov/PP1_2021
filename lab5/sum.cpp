#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int cnt1=0,cnt2=0;
    int n=s.size();

    for(int i = 0 ; i< n;i++){
        if(i%2==0)  cnt1+=(int(s[i])-48);
        else  cnt2+=(int(s[i])-48);
    }
    if(cnt1==cnt2)  cout<<"YES";
    else cout<<"NO";
    return  0;
}