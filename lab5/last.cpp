#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int max=-1e9;
    char helper=s[0];
    int n=s.size();
    for(int i = 1 ; i<n;i++ )   if(max<int(s[i]))            max=s[i];

    cout<<char(max);
    return 0;
}