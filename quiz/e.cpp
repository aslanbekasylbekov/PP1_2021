#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    set <char> foo;
    for(int i=n;i<m;i++){
        string s=to_string(i);
        for(int j=0;j<s.size();j++){
            foo.insert(s[j]);
        }
        if(foo.size()==m){
            cout<<i;
            break;
        }else{
            foo.clear();
            
        }
    }
    
}    
