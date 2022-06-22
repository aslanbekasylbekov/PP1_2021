#include <iostream>
using namespace std;
//проверка симметричности матрицы
int main()
{ int n;
 int a[100][100]; 
 cin>>n;
 
for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
        cin>>a[i][j];
bool symmetric=true;
for (int i=0;i<n;i++)
    for (int j=i+1; j<n;j++)
      if (a[i][j] !=a[j][i]) symmetric=false;
      if (symmetric) cout<<"yes";
      else cout <<"no";
}