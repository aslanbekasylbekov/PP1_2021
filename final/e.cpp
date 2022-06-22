#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	set <int> foo;
	int cnt[n];
	for(int i=0; i<n;i++)
		cnt[i]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] > 0)
				cnt[i]++;			
		}
	}
	for(int i=0;i<n;i++){
		foo.insert(cnt[i]);
	}
	int max=0;
	int pos;
	if(foo.size() == 1)
		cout << "Numbers are equal";
	else{
		for(int i=0;i<n;i++){
			if(cnt[i]>max){
				max=cnt[i];
				pos=i;
			}
		}
		cout<<pos+1;
	}	
}
