#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int max=a[0][0],max2=a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max2=max;
                max=a[i][j];
            }
            else if(a[i][j]>max2 && a[i][j]<max){
                max2=a[i][j];
            } 
        }
    }
    if(max==max2){
        cout<<0;
    }else{
        cout<<max2;
    }
}
/*
max=9
max2=-1 max2=7 max2=8

-1 7 3 2 
9 2 4 1 
8 2 -6 4
1 4 9 4
*/
