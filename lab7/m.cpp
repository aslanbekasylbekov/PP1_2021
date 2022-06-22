#include <iostream>
using namespace std;
void simple(int i,int n){
    if(i>n) return;
    cout<<i<<" ";
    simple(i+1,n);
}
int main(){
    int n; cin>>n;
    simple(1,n);
}