#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin>>n
    int a[n]; int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,a+n);
    rotate(a,a+n-m,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}