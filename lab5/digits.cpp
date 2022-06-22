#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int n=s.size();
    int a[10];  
    for(int i = 0 ; i< 10;i++){     // 0-0 1-2 2-2 3-2 4-0 5-0 6-0 7-0 8-0 9-0
        a[i]=0;  
    }
    for(int i = 0 ; i<n;i++){
        a[int(s[i])-48]++; 
    }
    int max=-1e9,min=1e9;
    for(int i =0;i<10;i++){
        if(max<a[i])    max=a[i];
        if(min>a[i] and a[i]!=0)    min=a[i];
    }
    //for(int i = 0 ; i< n ;i++)  cout<<a[i]<<" ";
    if(max==min)    cout<<"YES";    
    else cout<<"NO";
    return 0;
}   