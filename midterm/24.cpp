#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    double k=0;
    int m=0;
    double sum=0;
    for(int i=0;i<n;i++){
        k=0.3*n;
        sum=sum+k;
        if(sum<500000){
           m++;
        }
        n=1.1*n;     
    }
    cout<<m+1;
}