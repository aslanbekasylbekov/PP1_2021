#include <iostream>
#include <iomanip>
using namespace std;
double per(int n,int m){
    double b;
    b=double(m*100)/(double)n;
    return b; 
    
}
int main(){
    int n,m; cin>>n>>m;
    cout<<fixed<<setprecision(5)<<per(n,m);
    return 0;
}