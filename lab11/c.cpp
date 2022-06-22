#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
int main(){
    int n; cin>>n;
    int cnt=0;
    map<string, int>foo;
    vector<pair<int,string>> v;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        int k; cin>>k;
        foo[s]+=k;
        cnt+=k;
    }
    for(auto i:foo){
        v.push_back({i.second,i.first});
    }
    sort(v.rbegin(),v.rend());
    for(auto i:v){
        cout<<i.second<<" "<<(i.first*1.0/cnt)*100<<"%\n";
    }
}