#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;   
    string s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    int a[n],b[n];
    for(int i=0;i<n;i++) a[i]=int(s1[i]);
    for(int i=0;i<m;i++) b[i]=int(s2[i]);
    if(n!=m) cout<<"no";
    else{
        bool equal=true;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]) equal=false;
        }
        if(equal) cout<<"yes";
        else{
            cout<<"no";
        }
    }
}    