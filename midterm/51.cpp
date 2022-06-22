#include <bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	map <char,int> foo;
	int max=1; 
	int cnt=1;
	char max1=s[0];
	for(int i=0;i<s.size()-1;i++){
		if(s[i]==s[i+1]) cnt++;
		else cnt=1;
		if(max<cnt){
		max=cnt;
		max1=s[i];
	}
	
	}
	cout<<max1<<" "<<max;
}