#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,z; cin>>n; // 1 2 3 4 5
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>z;
    for(int i=0;i<n;i++){ 
        cout<<a[(i-z+n)%n]<<" ";
    }
}