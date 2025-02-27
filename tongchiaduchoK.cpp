#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long h=n/k;
		h*=k*(k-1)/2;
		n%=k;
		h+=n*(n+1)/2;
		if(h==k) cout << "1" << endl;
		else cout << "0" << endl;
	}
}