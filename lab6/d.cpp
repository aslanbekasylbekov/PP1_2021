#include <iostream>
#include <cmath>
using namespace std;


bool YesNo(int a[],int n,int x){
    bool finded=false;
    for(int i = 0 ; i < n;i++){
        if(a[i]==x) finded=true;
    }

    return finded;
}


int main(){
    int n;  cin>>n;
    int a[n];
    for(int i = 0 ; i<n;i++){
        cin>>a[i];
    }
    int x  ;    cin>>x;

    if(YesNo(a,n,x)==true)  cout<<"Yes";
    else cout<<"No";

    return 0;
}