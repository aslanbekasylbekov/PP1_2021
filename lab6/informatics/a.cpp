#include <iostream>
using namespace std;
int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int a, b, c , d;
    cin >> a >> b >> c >> d;
    cout << min(min(a,b), min(c,d));
    return 0;
}