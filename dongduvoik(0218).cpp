#include<bits/stdc++.h>
using namespace std;
int ucln(int n, int m){
	while(m){
		int tmp=n%m;
		n=m;
		m=tmp;
	}
	return n;
}
long long souoc(int n){
	long long cnt=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(n/i==i) cnt++;
			else cnt+=2;
		}
	}
	return cnt;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		if(n==0||n==1){
			cout << "0" << endl;
			continue;
		}
		int g=abs(a[1]-a[0]);
		for(int i=1;i<n;i++){
			g=ucln(g,abs(a[i]-a[0]));
		}
		long long s=souoc(g);
		cout << s << endl;
	}
}