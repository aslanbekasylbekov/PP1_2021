#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    map<string,int> foo;
    foo["SUN"]=1;
    foo["MON"]=2;
    foo["TUE"]=3;
    foo["WED"]=4;
    foo["THU"]=5;
    foo["FRI"]=6;
    foo["SAT"]=7;

    string s;   cin>>s;
    foo[s];
    cout<<1-foo[s]+7;
    return 0;
}