#include<bits/stdc++.h>
using namespace std;
long long lcm(long long n, long long m){
	while(n*m > 0){
		if(n>m) n%=m;
		else m%=n;
	}
	return m+n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
	    cin >> a >> b;
	    long long uoc=lcm(a,b);
	    long long boi=a*b/uoc;
	    cout << boi << " " << uoc << endl;
	}
}