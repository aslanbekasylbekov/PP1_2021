#include <bits/stdc++.h>
using namespace std;

string fin(int n, string s){
    if(n == 0)
        return s;
    s = char(n % 2 + 48) + s;
    return fin(n/2, s);
}

int count1(string s){
    int k = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '1')
            k++;
    return k;
}

int main(){
    int n; cin>>n;
    for(int i = 0; i < n; i++)
    {
        string s = fin(i, "");    
        cout << count1(s) << ",";
    }
    cout << count1(fin(n, ""));
}