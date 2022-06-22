#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    bool finded=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) finded=false;
    }
    return finded;
}
int main(){
    int n; cin>>n;
    if(prime(n)==true) cout<<"prime";
    else cout<<"composite";
}