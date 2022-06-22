#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n];
    a[0]=2;
    for(int i=0;i<n;i++){
        if(a[i+1]=a[i]+3){
            cout<<a[i]<<" ";
        }
    }
}