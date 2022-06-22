#include <bits/stdc++.h>
using namespace std;
void skood(string s, int i){
	if(i==s.size()-1){
		cout<<s[i];
		return;
	}
	if(i==0)
	cout<<s[i];
	if(s.size()%2==1 and s.size()/2==i){
		cout<<'('<<s[i]<<')';
	}
	if(i<=(s.size()/2-1) and i>0)
	cout<<'('<<s[i];
	if(i>=(s.size()/2+1) and i>0)
	cout<<s[i]<<')';
	skood(s,i+1);
}
void skeven(string s, int i){
	if(i==s.size()-1){
		cout<<s[i];
		return;
}
	if(i==0)
	cout<<s[i];
	if(s.size()%2==1 and s.size()/2==i){
		cout<<'('<<s[i]<<')';
	}
	if(i<=(s.size()/2-1) and i>0)
	cout<<'('<<s[i];
	if(i>=s.size()/2 and i>0)
	cout<<s[i]<<')';
	skeven(s,i+1);
}
int main(){
	string s; cin>>s;
	if(s.size()%2==1)
	skood(s,0);
	else skeven(s,0);
}
