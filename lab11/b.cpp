// #include <iostream>
// #include <map>
// #include <algorithm>
// #include <cmath>
// #include <set>

// using namespace std;
// int main(){
//     int n;  cin>>n;
//     set<int> foo;
//     for(int i = 0 ; i< n;i++){
//         int t;  cin>>t;
//         foo.insert(t);
//     }
//     if(foo.size()==n)   cout<<"YES";
//     else cout<<"NO";
//     return 0;
// }

#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;
int main(){
    int n;  cin>>n;
    int a[n];
    for(int i = 0 ; i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (a[j] > a[j+1])
                swap(a[j], a[j+1]);
    bool uniq=true;
    for(int i = 0 ; i< n-1;i++){
        if(a[i]==a[i+1])    uniq=false;
    }
    if(uniq) cout<<"YES";
    else cout<<"NO";
    return 0;
}