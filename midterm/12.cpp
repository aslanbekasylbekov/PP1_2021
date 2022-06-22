#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,d,c,di,ci;
    cin>>n>>d>>c>>di>>ci;
    int pr=(n*100+d)*c;
    int mon=di*100+ci;
    if(pr>mon){
        cout<<-1;
        return 0;
    }else{
        int sdacha=mon-pr;
        cout<<sdacha/100<<" "<<sdacha%100;
    }
}