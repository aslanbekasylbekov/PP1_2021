#include <bits/stdc++.h>
using namespace std;
int main (){
    int n; cin>>n;
    int a[n][n];
    int i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max=a[0][0];
    int max1=0,max2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][i]>max){
               max=a[i][i];
               max1=i;
               max2=j;            
            }
        }     
    } 
    cout<<"Maximum element is:"<<" "<<max<<" "<<"with coordinates:"<<" "<<max1+1<<";"<<max2+1;
    return 0;
}