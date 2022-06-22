#include <iostream>
#include <string>
using namespace std;
int main(){
    char s;   //A
    cin>>s;
    
    if(s>='a' and s<='z'){   //a
        s=s-32;    //a-97    A-65
    }
    else if(s>='A' and s<='Z'){   //A
        s=s+32;
    }
    cout<<s; //a

}       