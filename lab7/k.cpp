#include <iostream>
#include <algorithm>
using namespace std;
int maxc(int n,string s,char maxV){
    if(n==s.size()) return maxV;
    maxV=max(maxV,s[n]);
    return maxc(n+1,s,maxV);
}    
int main(){
    string s; cin>>s;
    cout<<char(maxc(0,s,0));
}