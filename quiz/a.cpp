#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
    map<pair<int, int>, int> foo;
    for(int i = 0; i < n; i++){
      int x, y;
      cin >> x >> y;
      if(x>y) swap(x, y);
      
      cout<< foo[make_pair(x, y)]<< endl;
      foo[make_pair(x,y)]++;
    }
}