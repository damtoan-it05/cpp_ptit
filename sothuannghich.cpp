#include<bits/stdc++.h>
using namespace std;
int check(long long m){
	long long s=0, n=m;
	while(n){
		s = s*10 +n%10;
		n/=10;
	}
	if(s==m) return 1;
	else return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}