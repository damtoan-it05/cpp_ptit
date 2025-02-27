#include<bits/stdc++.h>
using namespace std;
long long ucln(long long n, long long m){
	while(m){
		long long tmp=n%m;
		n=m;
		m=tmp;
	}
	return n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, x, y;
		cin >> a >> x >> y;
		string k=to_string(a);
		long long n=ucln(x,y);
		for(int i=1;i<=n;i++){
			cout << k;
		}
		cout << endl;
	}
}