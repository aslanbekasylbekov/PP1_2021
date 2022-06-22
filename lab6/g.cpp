#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void noVowels(string s){
    for(int i = 0  ; i< s.size();i++){
        if(s[i]=='o' || s[i]=='a' ||s[i]=='e' || s[i]=='u' ||s[i]=='i' ||s[i]=='O' || s[i]=='A' ||s[i]=='E' || s[i]=='U' ||s[i]=='I') continue;
        else cout<<s[i];
    }
}


int main(){

    string s;   getline(cin,s);
    noVowels(s);

    return 0;
}