#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    int a[n][m];
    vector <int> foo;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            foo.push_back(a[i][j]);
        }
        sort(foo.begin(),foo.end());
        if(i%2==1){
            reverse(foo.begin(),foo.end());
        }
        for(int l=0;l<foo.size();l++){
            cout<<foo[l]<<" ";
        }
        foo.clear();
        cout<<endl;
    }
    
}