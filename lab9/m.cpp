#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string> foo;
    int n;    cin>>n;
    for (int i = 0 ; i< n;i++){
        int t;    cin>>t;
        if(t==1){
            string name;    cin>>name;
            foo.push(name);
        }
        else{
            foo.pop();
        }
        if(foo.empty())   cout<<"queue is empty\n";
        else cout<<foo.front()<<endl;
    }
}