#include <iostream>
using namespace std;
string palin(string s,int i){
    if(i==s.size()/2) return "Yes";
    if(s[i]!=s[s.size()-i-1]) return "No";
    return palin(s,i+1);
}
int main(){
    string s; cin>>s;
    cout<<palin(s,0);
}