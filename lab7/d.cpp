#include <iostream>
using namespace std;
int summ(string s,int i,int sum){
    if(i==s.size()) return sum;
    sum+=s[i]-48;
    return summ(s,i+1,sum);
}
int main(){
    string s; cin>>s;
    cout<<summ(s,0,0);
}