#include <iostream>
using namespace std;
int almat(int n,int sum){
    if(n==0) return sum;
    sum+=(n%10)/2;
    n/=10;
    return almat(n,sum);
}
int main(){
    int n; cin>>n;
    cout<<almat(n,0);
}