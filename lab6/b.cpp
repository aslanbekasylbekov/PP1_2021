#include <iostream>
#include <cmath>
using namespace std;
void summ(int a[],int b[],int n){
    for(int i = 0 ; i< n;i++){
        cout<<abs(a[i]-b[i])<<" ";
    }
}
int main(){
    int n;  cin>>n;
    int a[n],b[n];
    for(int i = 0 ; i< n;i++){
        cin>>a[i];
    }
    for(int i = 0 ; i< n;i++){
        cin>>b[i];
    }

    summ(a,b,n);
    return 0;
}