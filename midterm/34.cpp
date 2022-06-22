#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=15;
    char s[n];
    char d[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int j=0;j<n;j++){
        cin>>d[j];
    }
    int first=0;
    int second=0;
    for(int a=0,b=0;a<n,b<n;a++,b++){
        if(s[a]=='R' and d[b]=='S') first++;
        if(s[a]=='R' and d[b]=='P') second++;
        if(s[a]=='S' and d[b]=='P') first++;
        if(s[a]=='S' and d[b]=='R') second++;
        if(s[a]=='P' and d[b]=='S') second++;
        if(s[a]=='P' and d[b]=='R') first++;
    }
    if(first>second) cout<<"First player wins!";
    if(second>first) cout<<"Second player wins!";
    if(second==first) cout<<"Friendship";
}