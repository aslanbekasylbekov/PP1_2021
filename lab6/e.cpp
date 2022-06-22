#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double Hypo(double a,double b){
    return sqrt(a*a+b*b);
}
int main(){
    double a,b;    cin>>a>>b;
    cout<<setprecision(4)<<Hypo(a,b);
    return 0;
}