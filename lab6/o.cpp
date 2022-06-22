#include <iostream>
using namespace std;
int lucky(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n; cin>>n;
    if(lucky(n)%(n%10)==0){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    lucky(n);
}