#include <iostream>
using namespace std;
int summ(string s,int i,int cnt){
    if(i==s.size()) return cnt;
    if((s[i]-'0')%2==0) return summ(s,i+1,cnt+1);
    return summ(s,i+1,cnt);
}
int main(){
    string s;
    cin>>s;
    cout<<summ(s,0,0);
}