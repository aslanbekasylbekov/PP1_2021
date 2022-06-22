#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    char a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Orks=0;
    int Dragons=0;
    int Humans=0;
    for(int i=0;i<n;i++){
        if(a[i]=='O') Orks++;
        if(a[i]=='D') Dragons++;
        if(a[i]=='H') Humans++;
    }
    cout<<"Orks:"<<" "<<Orks/3<<endl;
    cout<<"Dragons:"<<" "<<Dragons/3<<endl;
    cout<<"Humans:"<<" "<<Humans/3;
}