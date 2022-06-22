#include <bits/stdc++.h>
using namespace std;
int deg(int n){
    if(n==0) return 1;
    return 2*deg(n-1);
}
int main(){
    int n; cin>>n;
    cout<<deg(n);
}