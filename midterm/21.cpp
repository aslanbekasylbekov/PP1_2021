#include <iostream>
using namespace std;
int main(){
    int n,m,b;
    cin>>n>>m>>b;
    int a[n];
    int sum=0;
    a[0]=m;
    for(int i=1;i<n;i++){
        a[i]=a[i-1]+b; 
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        sum=sum+a[i];
    }
   cout<<endl;
   cout<<"sum: "<<sum;
}