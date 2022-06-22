#include <iostream>
using namespace std;
bool checking(long long n){
    bool even=true;
    while(n!=0){
        if(n%2==1) even=false;
        n/=10;
    }
    return even;
}
int main(){
    long long n;    cin>>n;
    if(checking(n)==true)  cout<<"Valid";
    else cout<<"Not valid";
    return 0;
}