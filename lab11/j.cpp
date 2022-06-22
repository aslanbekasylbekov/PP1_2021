#include <iostream>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int main(){
    double x,y;    cin>>x>>y;
    int n;  cin>>n;
    multimap<double,int> foo;
    vector <pair<double,double>> helper;
    for(int i = 0 ; i<n;i++){
        double a,b;    cin>>a>>b;
        double distance=sqrt(((a-x)*(a-x))+((b-y)*(b-y)));
        helper.push_back({a,b});
        foo.insert(pair<double,int> (distance,i));
    }
    for(auto i: foo){
        cout<<helper[i.second].first<<" "<<helper[i.second].second<<endl;
    }
    return 0;
}