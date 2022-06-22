#include <iostream>
#include <stack>
using namespace std;
int main(){
    string code;    cin>>code;
    stack<char> foo;
    for (int i = 0 ; i< code.size();i++){
        if (foo.empty())   foo.push(code[i]);
        else{
            if(foo.top()==code[i] and code[i]=='1') foo.pop();
            else foo.push(code[i]);
        }
    }
    string answer="";
    while(!foo.empty()){
        answer=foo.top()+answer;
        foo.pop();
    }
    cout<<answer<<endl;  
    return 0;
}