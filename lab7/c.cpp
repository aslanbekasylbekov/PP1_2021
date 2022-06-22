#include <iostream>
using namespace std;
bool binarySearch(int n, int a[],int x,int h)  {
    if(n==h) return 1;
    else{
        if(a[h]==x) return 0 * binarySearch(n,a,x,h+1); //false
        else return 1 * binarySearch(n,a,x,h+1);    //true
    }
}
int main(){
    int n;  cin>>n;
    int a[n];
    for(int i = 0 ; i<n;i++)    cin>>a[i];
    int x;  cin>>x;
    if(binarySearch(n,a,x,0)==false)    cout<<"Yes";
    else cout<<"No";
    return 0;
}