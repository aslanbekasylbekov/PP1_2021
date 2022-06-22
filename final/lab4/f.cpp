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
    int max=-1e9;
    int rows,col;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max){
                max=a[i][j];
                rows=i;
                col=j; 
                rows++;
                col++;   
            }
        }
    }
    cout<<rows<<" "<<col;

}