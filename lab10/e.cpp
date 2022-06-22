#include <bits/stdc++.h>
using namespace std;
int main(){
    int q; cin>>q;
    map<string,int> foo;
    int sum=0;
    for(int i=0;i<q;i++){
        int n; cin>>n;
        for(int j=0;j<n;j++){
            string s; 
            int k;
            cin>>s>>k;
            foo[s]+=k;
            sum+=k;
        }
    }
    for(auto i:foo){
        cout<<i.first<<" "<<(i.second*1.0)/sum*100<<endl;
    }
}