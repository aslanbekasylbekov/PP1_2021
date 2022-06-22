#include <iostream>
using namespace std;
int can(int n){
  if (n < 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return (can(n-3) || can(n-5));
}
int main()
{
  int n;
  cin >> n;
  if (can(n)==1)
    cout << "YES";
  else 
    cout << "NO";
  return 0;
}