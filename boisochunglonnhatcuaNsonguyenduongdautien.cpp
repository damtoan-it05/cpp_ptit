#include<bits/stdc++.h>
using namespace std;
long long boi(long long n, long long m){
	long long a = n*m;
	while(n*m){
		if(n>m) n%=m;
		else m%=n;
	}
	return a/(m+n);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
	    cin >> n;
	    long long s=1;
    	for(int i=1;i<=n;i++){
    		s=boi(s, i);
    	}
    	cout << s << endl;
	}
}