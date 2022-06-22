#include <iostream>
using namespace std;

int main() {
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n][m];

    // обработка
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cnt++;
            if (i%2 == 0) a[i][j] = cnt;
            else a[i][m - j - 1] = cnt;
        }
    }
    // вывод
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 10 == a[i][j]) cout << "   ";
            else if (a[i][j] % 100 == a[i][j]) cout << "  ";
            else if (a[i][j] % 1000 == a[i][j]) cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }

}