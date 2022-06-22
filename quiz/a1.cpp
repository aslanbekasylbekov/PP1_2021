#include <bits/stdc++.h> 
using namespace std;
int main(){
    string s; getline(cin,s);
    map<string,int> foo;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            ans+=s[i];
        }
        else{
            foo[ans]++;
            ans = "";
        }
    }
    foo[ans]++;
    vector<pair<int, string>>v;
    for(auto it : foo){
        v.push_back(make_pair(it.second, it.first));
    }
    sort(v.rbegin(),v.rend());
    for(auto it:v){
        cout<<it.second<<":"<<it.first<<endl;
    }
}
