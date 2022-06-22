#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool isMore(string s,int x){
    int cnt=0;
    for(int i = 0 ; i< s.size();i++){
        if(s[i]>='0' && s[i]<='9'){  
            cnt++;
        }
    }
    return x<=cnt;
}

int main(){

    string s;   cin>>s;
    int x;  cin>>x;
     if(isMore(s,x)==true)  cout<<"Valid";
     else cout<<"Not valid";

    return 0;
}