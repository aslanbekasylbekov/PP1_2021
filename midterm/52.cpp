#include <iostream>
using namespace std;
int main(){
    int a[256]={0};//заполниться полностую нулями
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        a[s[i]]++;
    }
    bool met=false;
    for(int i=0;i<256;i++){
        if(a[i]%2==1){
            if(met){
                cout<<"Onepiece";
                return 0;
            }else{
                met=true;
            }
        }
    }
    cout<<"Luffy is the pirate king!";
}