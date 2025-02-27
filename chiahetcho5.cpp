#include<bits/stdc++.h>
using namespace std;
int check(string a, int n){
	int tmp=1, s=0;
	for(int i=n-1;i>=0;i--){
		s+= (a[i]-'0')*tmp;
		tmp*=2;
		tmp%=10;
		s%=10;
	}
	if(s%5==0) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		if(check(s,n)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}