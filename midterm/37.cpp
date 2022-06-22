#include <iostream>
using namespace std;
int main(){
    string s;   cin>>s;
    string a="";
    for(int i = 0 ; i< s.size()+2;i++){
        a+='+';
    }
    cout<<a<<endl;
    cout<<'+'<<s<<'+'<<endl;
    cout<<a;
    return 0;
}