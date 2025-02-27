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
		int n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<95;j++){
				if(a[i]==f[j]){
					cout << a[i] << " ";
					break;
				}
			}
		}
		cout << endl;
	}
}