#include <iostream>
using namespace std;
void tou(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' and s[i]<='z'){
            s[i]=s[i]-32;
        }
        cout<<s[i];
    }    
}
int main(){
    string s; cin>>s;
    tou(s);
}