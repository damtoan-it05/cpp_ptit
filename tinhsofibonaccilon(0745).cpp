#include<bits/stdc++.h>
using namespace std;
long long f[1005];
long long mod=1e9+7;
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<1005;i++){
		f[i]=(f[i-1]%mod + f[i-2]%mod)%mod;
	}
}
int main(){
	fibo();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
}