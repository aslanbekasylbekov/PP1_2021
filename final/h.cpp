#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    int q=d;
    int w=m;
    int s=y;;
    if(d==28 && m==2){
        q=+1;
        w=m+1;
        
    }
    else if(d<=31 && m<=12){
        q=d+1;
        y=s;
    }
    if(d==31 && m<12){
        q=+1;
        w=m+1;
        
    }
    else if(d==30 && m==4){
        q=+1;
        w=m+1;
      
    }
    else if(d==31 && m==12){
        q=+1;
        w=+1;
        s=y+1;

    }
    cout<<q<<" "<<w<<" "<<s;
}