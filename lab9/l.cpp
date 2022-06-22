#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  pair <int,int> foo[n];
  for(int i=0;i<n;i++){
    int a,b;    cin>>a>>b;
    foo[i].first=a+b;
    foo[i].second=i+1;
  }
  sort(foo,foo+n);
  for(int i=0;i<n;i++){
    cout<<foo[i].second<<" ";
  }
}