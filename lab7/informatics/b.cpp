#include <iostream>
using namespace std;
int maxc(int i,string s,char maxV){
    if(i==s.size()) return maxV;
    maxV=max(maxV,s[i]);
    return maxc(i+1,s,maxV);
}    
int main(){
    string s; cin>>s;
    cout<<char(maxc(0,s,0));
}