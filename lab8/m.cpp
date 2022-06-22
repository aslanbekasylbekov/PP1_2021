#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    set <int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo.insert(t);
    }
    int sum=0;
    set <int> ::iterator it;
    for(it=foo.begin();it!=foo.end();it++){
        sum+=*it;
    }
    cout<<sum;
}