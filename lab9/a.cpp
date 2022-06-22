#include <bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  pair <int,int> foo[n];
  for(int i=0;i<n;i++){
    cin>>foo[i].first>>foo[i].second;
  }
  sort(foo,foo+n);
  for(int i=0;i<n;i++){
    cout<<foo[i].first<<" "<<foo[i].second<<endl;
  }
}