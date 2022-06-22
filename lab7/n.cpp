#include <bits/stdc++.h>
using namespace std;
string cheater(int a[],int n,int i,int k){
    if((a[i + 1] - a[i]) < k) return "cheater";
    else if(i == n - 1) return "no";
    else return cheater(a,n,i+1,k);
}
int main(){
    int n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<cheater(a,n,0,k);
}
