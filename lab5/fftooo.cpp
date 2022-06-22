#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin>>s;
    int a[26];  
    for(int i = 0 ; i< 26;i++){
        a[i]=0;  
    }
    int max=-1e9;
    for(int i = 0 ; i<s.size();i++){
        a[int(s[i])-97]++;   
    }
    for(int i = 0 ; i<26;i++){
        if(max<a[i])    max=a[i];     
    }
    bool finded=false;
    for(int i = 0 ;i<26;i++){
        if(finded==false && a[i]==max){  
            cout<<char(i+97)<<" "<<a[i];
            finded=true;
        }
        
    }
    return 0;
}   

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;   cin>>s;
//     int a[123];  
//     for(int i = 0 ; i< 123;i++){
//         a[i]=0;  
//     }
//     int max=-1e9;
//     for(int i = 0 ; i<s.size();i++){
//         a[int(s[i])]++;   
//     }
//     for(int i = 0 ; i<123;i++){
//         if(max<a[i])    max=a[i];     
//     }
//     bool finded=false;
//     for(int i = 0 ;i<123;i++){
//         if(finded==false && a[i]==max){  
//             cout<<char(i);
//             finded=true;
//         }
        
//     }
//     return 0;
// } 