#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    map <int,int> foo;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        foo[a[i]]++;
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(foo.count((a[i] ^ a[j]))){
                cnt++;
            }
        }
    }
    cout << cnt;
}
