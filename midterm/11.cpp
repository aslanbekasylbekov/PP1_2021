#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin >> n;
    char z; cin >> z;
    int c; cin>>c;
    if(z == 'b'){
        cout << n * 1024;
    }
    else if(z == 'k'){
        cout << fixed << setprecision(c) << n/1024;
        }
    return 0;
}