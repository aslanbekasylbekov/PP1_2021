#include<bits/stdc++.h>
using namespace std;
int main() {
    string s, h = "";
    cin >> s;
    int n = s.size();
    int k = 0;
    for(int i = 0; i < n; i++)
        if(s[i] != s[n-i-1])
            h += s[i];
    cout << h<<endl;
}