#include <iostream>
using namespace std;
string uniq(long long n){
    if(n==1) return "Yes";
    if(n%2 != 0) return "No";
    return uniq(n/=2);
}
int main(){
    long long n;
    cin>>n;
    cout<<uniq(n);
} 
