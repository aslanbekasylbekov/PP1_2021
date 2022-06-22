#include <iostream>
using namespace std;
void func(int n, int a[]){
    int max=-1e9;
    for(int i=0;i<n;i++){
        if(a[i]>max) {
           max=a[i];
           
        }   
    }
    cout<<max;
}
int main(){
    const int n=4;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    func(n,a);
}