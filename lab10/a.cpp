#include <bits/stdc++.h>
using namespace std;
bool comp1(int i,int j){
    return i<j;
}
bool comp2(string i,string j){
    return i<j;
}
int main(){
    int n; cin>>n;
    vector<string> foo(n);
    vector<int> foo1(n);
    for(int i=0;i<n;i++){
        cin>>foo[i]>>foo1[i];
    }
    cout<<endl;
    sort(foo.begin(),foo.end(),comp2);
    sort(foo1.begin(),foo1.end(),comp1);
    for(int i=0;i<n;i++){
        cout<<foo[i]<<" "<<foo1[i]<<endl;
    }

}