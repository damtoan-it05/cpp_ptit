#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long h=n/k;
		h*=(k-1)*k/2;
		n%=k;
		h+=n*(n+1)/2;
		cout << h << endl;
	}
}