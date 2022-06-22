#include <bits/stdc++.h>
using namespace std;
bool Election(bool x,bool y,bool z){
    if(x==0 && y==0 && z==0) return 0;
    if(x==1 && y==1 && z==1) return 1;
    if(x==0 && y==0 && z==1) return 0;
    if(x==0 && y==1 && z==1) return 1;
    if(x==0 && y==1 && z==0) return 0;
    if(x==1 && y==1 && z==0) return 1;
    if(x==1 && y==0 && z==0) return 0;
    if(x==1 && y==0 && z==1) return 1;
}
int main(){
    int x,y,z; cin>>x>>y>>z;
    cout<<Election(x,y,z);
}