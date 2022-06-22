#include <bits/stdc++.h>
using namespace std;
bool gunner(int n){
    if(n==2) return true;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n,m; cin>>n>>m;
    if(n<500 && gunner(n) && m%2==0){
        cout<<"Good job!";
    }else cout<<"Try next time!";

}