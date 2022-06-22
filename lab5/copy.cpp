#include <bits/stdc++.h>
using namespace std;
int main(){ 
    string s1,s2;   cin>>s1>>s2;
    bool isCopy=true;

    if(s2.size()%s1.size()!=0)  cout<<"NO";
    else{
        string helper="";
        for(int i =0 ; i<=s2.size()-s1.size() ; i+=s1.size()){
            for(int j =i ; j< i+s1.size(); j++){
                helper+=s2[j];
            }
            if(helper!=s1)  isCopy=false;
            helper="";
        }
        if(isCopy)  cout<<"YES";
        else cout<<"NO";
    }

    

    return 0;
}