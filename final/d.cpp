#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    char n;
    cin>>a>>n>>b>>n>>c>>n>>d;
    if((a<=255 && b<=255 && c<=255 && d<=255) && (a>=0 && b>=0 && c>=0 && d>=0)){
        cout<<1;
    }else {
        cout<<0;
    }    
}