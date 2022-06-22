#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector <int> e,o;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x%2==0){
            e.push_back(x);
        }else{
            o.push_back(x);
        }
    }
    sort(e.rbegin(),e.rend());
    sort(o.begin(),o.end());
    for(int i=0;i<e.size();i++){
        cout<<e[i]<<" ";
    }
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
}