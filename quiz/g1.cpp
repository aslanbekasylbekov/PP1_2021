#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0, j = 0; i < n or j < m;){
        if(i < n and j < m){
            if(a[i] > b[j]){
                cout << b[j++];
            }
            else{
                cout << a[i++];
            }
        }
        else{
            if(i < n){
                cout << a[i++];
            }
            else{
                cout << b[j++];
            }
        }
        cout << " ";
    }
}