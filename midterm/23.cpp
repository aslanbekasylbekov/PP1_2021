#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a,b; 
    cin>>a>>b; //2 32
    bool pair=false;
    for(int i=-1000;i<1000;i++) //i-degree
        if(a*pow(2,i)==b){ //a*2^i=b
            cout<<"YES "<<i; 
            pair=true;
        }
        if(pair==false) cout<<"NO";
}   