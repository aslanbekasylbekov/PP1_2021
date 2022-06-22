#include <iostream>
using namespace std;
void summ(long long n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
        
    }
    cout<< sum;    
}
int main(){
    long long n;
    cin>>n;
    summ(n);
}