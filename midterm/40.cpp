#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#include <iomanip> 
using namespace std; 
char a[8][8];
void queen(int x,int y,int l){
    if( x>7 || x<0 || y>7 || y<0) return ;
    else{
        if(l==0){
            a[x][y]='2';
            queen(x-1,y-1,0);
        }
        else if(l==1){
            a[x][y]='2';
            queen(x-1,y,1);
        }
        else if(l==2){
            a[x][y]='2';
            queen(x-1,y+1,2);
        }
        else if(l==3){
            a[x][y]='2';
            queen(x,y+1,3);
        }
        else if(l==4){
            a[x][y]='2';
            queen(x+1,y+1,4);
        }
        else if(l==5){
            a[x][y]='2';
            queen(x+1,y,5);
        }
        else if(l==6){
            a[x][y]='2';
            queen(x+1,y-1,6);
        }
        else {
            a[x][y]='2';
            queen(x,y-1,7);
        }

    }
}
int main(){
    int n,m;    cin>>n>>m;
   
    for(int i = 0 ; i< 8;i++){
        for(int j = 0 ; j<8;j++){
            a[i][j]='*';
        }
    }
    if(n>7 || m>7){
        cout<<"Impossible";
    }
    else{
        a[n][m]='1';
        if((n-1)>=0 && (m-1)>=0){
            a[n-1][m-1]='2';
            queen(n-2,m-2,0);
        }
        if((n-1)>=0){
            a[n-1][m]='2';
            queen(n-2,m,1);
        }
        if((n-1)>=0 && (m+1)<8){
            a[n-1][m+1]='2';
            queen(n-2,m+2,2);
        }
        if((m+1)<8){
            a[n][m+1]='2';
            queen(n,m+2,3);
        }
        if((n+1)<8 && (m+1)<8){
            a[n+1][m+1]='2';
            queen(n+2,m+2,4);
        }
        if((n+1)<8){
            a[n+1][m]='2';
            queen(n+2,m,5);
        }

        if((n+1)<8 && (m-1)>=0){
            a[n+1][m-1]='2';
            queen(n+2,m-2,6);
        }
        if((m-1)>=0) {
            a[n][m-1]='2';
            queen(n,m-2,7);
        }
        for(int i = 0 ; i< 8;i++){
        for(int j = 0 ; j<8;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}