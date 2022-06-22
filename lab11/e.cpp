#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;  cin>>n;
    map<char,int> foo;
    map<char,int> ans;
    for(int i = 0 ; i<n;i++){
        string s;   cin>>s;
        for(int j = 0 ; j< s.size();j++){
            foo[s[j]]++; 
        }
        for(auto i:foo){
            ans[i.first]++;
        }
        foo.clear();
    }
    bool noCommon=true;
    vector <char> answer;
    for(auto i:ans){
        if(i.second>=n){
            noCommon=false;
            answer.push_back(i.first);
        }
    }
    if(noCommon){
        cout<<"NO COMMON CHARACTERS";
    }
    else{
        for(auto i: answer){
            cout<<i<<" ";
        }
    }
    return 0;
}