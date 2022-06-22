#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main(){
    int k;  cin>>k;
    string s;   cin>>s;
    for(int i = 0 ; i<s.size();i++){
        cout<<char(65+(int(s[i])-65+k)%26);
    }
    return 0;
}