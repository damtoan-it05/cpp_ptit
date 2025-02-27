#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int ucln(int n,int m){
	while(m){
		int tmp=n%m;
		n=m;
		m=tmp;
	}
	return n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long s=1,res=1;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int x=a[0];
		for(int i=0;i<n;i++){
			x=ucln(x,a[i]);
			s*=a[i];
			s%=mod;
		}
		while(x){
			if(x%2==1){
				res*=s;
				res%=mod;
			}
			s*=s;
			s%=mod;
			x/=2;
		}
		cout << res << endl;
	}
}