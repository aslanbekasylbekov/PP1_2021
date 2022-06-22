#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int cnt=0;
    int rez=0;
    for(int i=2;i<n;i++){
        for(int j=1;j<n;j++){
            if(i%j==0){
                cnt++;
            }
        }
        if(cnt<3){//Если у числа только два делителя
        rez=i;//присваеваем это число в результат
        cout<<rez<<" "<<"is prime"<<endl;
    }
    cnt=0;
    }
}