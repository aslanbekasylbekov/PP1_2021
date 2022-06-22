#include <bits/stdc++.h>
using namespace std;
bool sorted(int a[],int n){
    bool issorted=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) issorted=false;
    }
    return issorted;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(sorted(a,n)) cout<<"Sorted";
    else cout<<"Not Sorted";
    return 0;
}