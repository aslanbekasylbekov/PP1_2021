#include <iostream>
#include <string>
using namespace std;
int main(){
    int small=0,capital=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' and s[i]<='z'){
            small++;
        }
        if(s[i]>='A' and s[i]<='Z'){
            capital++;
        }
    }
    cout<<small<<" "<<capital;
}    