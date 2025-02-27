#include<bits/stdc++.h>
using namespace std;
int check(string a, int n){
	int c=0,l=0;
	for(int i=0;i<n;i+=2){
		c+=(a[i]-'0');
	}
	for(int i=1;i<n;i+=2){
		l+=(a[i]-'0');
	}
	if((c-l)%11==0) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		if(check(s,n)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}