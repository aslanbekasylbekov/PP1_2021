#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); ++i){
      s.insert(i,1, '*');
      ++i;
    }
    cout << s;
    return 0;
}