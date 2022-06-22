#include <iostream>
using namespace std;
int infin(int sum){
    int n; cin>>n;
    sum+=n;
    if(n==0) return sum;
    return infin(sum);
}
int main(){
    cout<<infin(0);
}