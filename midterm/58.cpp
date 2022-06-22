#include <iostream>
using namespace std;
int gcd(int a,int b){
    while(a>0 and b>0){
        if(a>b){
            a%=b;
        }else{
            b%=a;
        }
    }
    return a+b;
}
int main(){
    int n,m; cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}