#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    if(d<1 || m<1 || y<1970){
        cout<<"NO";
        return 0;
    }else if(d>=31 || m>12 || y>2035){
        if(d==31 || m==9 || y<1970){
            cout<<"NO";
        }
    }else {
        cout<<"YES";
        return 0;
    }      
}