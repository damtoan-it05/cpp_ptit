#include<bits/stdc++.h>
using namespace std;
int check(string a, int n){
	int l=0,r=n-1;
	while(l<r){
		if((a[l]-'0')%2||(a[r]-'0')%2) return 0;
		if(a[l]!=a[r]) return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		if(check(s,n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}