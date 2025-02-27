#include<bits/stdc++.h>
using namespace std;
long long f[100];
void fibo(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<95;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	fibo();
	int t;
	cin >> t;
	while(t--){
		long long n, ok=1;
		cin >> n;
		for(int i=0;i<95;i++){
			if(f[i]==n){
				cout << "YES" << endl;
			    ok=0;
			    break;
			}
		}
		if(ok) cout << "NO" << endl;
	}
}