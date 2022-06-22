#include <bits/stdc++.h>
using namespace std;
bool isPalin(string s){
    string ans=s;
    reverse(s.begin(),s.end());
    return ans==s;
}
int main(){
    string s; cin>>s;
    sort(s.begin(),s.end());
    do{
        if(isPalin(s)){
            cout<<"ZA WARUDO TOKI WO TOMARE\n";
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<"JOJO";
    return 0;
}