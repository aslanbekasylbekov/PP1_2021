#include <bits/stdc++.h>
using namespace std;
 
vector<char> foo;
vector<char> foo1;
int main(){
    string s;
    getline(cin,s);
    int n,max,cnt;
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            cnt++;
            foo.push_back(s[i]);
        }else if(max<cnt){
            cnt=max;
            foo1=foo;
            cnt=0;
            foo.clear();  
        }
    }
    for(auto i:foo1){
        cout<<i;
    }
}