#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    multimap <int,int> foo;
    for(int i=0;i<n;i++){
        int a,b; cin>>a>>b;
        foo.insert(pair<int,int>(b,a));
    }
    for(auto i:foo){
        cout<<i.second<<" "<<i.first<<endl;
    }
}