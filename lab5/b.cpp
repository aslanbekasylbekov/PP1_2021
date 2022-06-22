#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' and s[i]<='z'){
            s[i]=s[i]-32;    //a-97    A-65
        }
        cout<<s[i];
    } 
}       