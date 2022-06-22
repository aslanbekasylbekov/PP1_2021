#include <iostream>
using namespace std;\
bool Xor(bool x,bool y){
    if(x^y) return 1;
    else return 0;
}
int main(){
    int x,y; cin>>x>>y;
    cout<<Xor(x,y);
}