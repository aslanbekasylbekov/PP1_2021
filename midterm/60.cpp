#include <bits/stdc++.h>
using namespace std;
bool IsPerfectNumber(int n) {
    return n % 3 == 0;
}
int main() {
    int ans = 0;
    while (true) {
        int n;
        cin >> n;
        if (!IsPerfectNumber(n)) {
            break;
        }
        ++ans;
    }
    cout << ans << endl;
    return 0;
}