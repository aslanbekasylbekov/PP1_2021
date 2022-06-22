#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k; cin>>a>>b>>k;
    vector <int> foo;
    int c=min(a,b);
    for(int i=c;i>=1;i--){
        if(a%i==0 && b%i==0){
            foo.push_back(i);
        } 
    }
    cout<<foo[k-1];
}