#include <iostream>
using namespace  std;
int main() {
    int cnt=0,max=0,d;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){   
        if(s[i]!=' ')cnt++;
        else {
            if(cnt>max){
               max=cnt;
               d=i-cnt; }
               cnt=0;
        }
        if(cnt>max){
            max=cnt;
            d=i-cnt+1; }
    }
    for(int i=d;i<d+max;i++)
    cout << s[i] ;
    cout << endl << max;
    return 0;
}