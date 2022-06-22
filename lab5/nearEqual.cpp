// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1,s2;   cin>>s1>>s2;
//     int n=s1.size(),m=s2.size();
//     int a[n],b[n];
//     for(int i = 0 ; i< n;i++)   a[i]=int(s1[i]);
//     for(int i = 0 ; i< m;i++)   b[i]=int(s2[i]);
//     sort(a,a+n);
//     sort(b,b+n);
//     // for(int i = 0 ; i<n;i++)    cout<<a[i]<<" ";   
//     // cout<<endl;
//     // for(int i = 0 ; i<m;i++)    cout<<b[i]<<" ";   
//     // cout<<endl;
//     if(n!=m)    cout<<"NO";
//     else {
//         bool equal=true;
//         for(int i = 0 ; i< n;i++){
//             if(a[i]!=b[i])  equal=false;
//         }
//         if(equal)   cout<<"YES";
//         else cout<<"NO";
//     }
    
//     return  0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t; cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}