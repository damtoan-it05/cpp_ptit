#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long n, long long m){
	long long x=n*m;
	while(m){
		long long tmp=n%m;
		n=m;
		m=tmp;
	}
	return x/n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long s=bcnn(bcnn(x,y),z);
		long long a=(long long)pow(10,n-1);
		long long b=a/s;
		if(s>=a*10) cout << "-1";
		else{
			while(s*b<a){
	    		b++;
	    	}
	    	s*=b;
    		cout << s;
		}
		cout << endl;
	}
}