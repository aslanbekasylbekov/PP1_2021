#include <iostream>
#include <cmath>
using namespace std;
int summ(int a[],int b[],int n){
    int cnt=0;
    for(int i = 0 ; i< n;i++){
        for(int j = 0 ;j<n;j++){
            if(a[i]!=0 && b[j]!=0 && a[i]==b[j]){
                cnt++;
                a[i]=0;
                b[j]=0;
                j=n;
            }
        }
    }
    return cnt;
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

    cout<<summ(a,b,n);
    return 0;
}