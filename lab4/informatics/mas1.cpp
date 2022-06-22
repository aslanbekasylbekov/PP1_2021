#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    int A[n]; 
    bool flag = false;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 1; i < n; i++)
        if (A[i - 1] * A[i] > 0){
            flag = true;
            cout << "YES";
        }
    if (flag == false)
        cout << "NO";

}