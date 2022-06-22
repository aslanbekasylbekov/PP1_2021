#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> foo;
    for(int i=0;i<n;i++){
        int t; cin>>t;
        foo.push_back(t);
    }
    sort(foo.begin(),foo.end());
    cout<<foo[foo.size()-1]-foo[0];
}
