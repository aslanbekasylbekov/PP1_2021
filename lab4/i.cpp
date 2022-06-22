#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 
    bool ok=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int x=2;x*x<=a[i][j];x++){
                if(x*x==a[i][j]){
                   cout<<x<<" ";
                   ok=true;
                }
            }
            if(!ok) cout<<a[i][j]<<" ";
            else ok=false;
        }
        cout<<endl;
    }
    
}            