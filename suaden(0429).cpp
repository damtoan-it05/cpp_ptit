#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, b, x;
	cin >> n >> k >> b;
	int a[n];
	for(int i=0;i<n;i++){
		a[i] = 1;
	}
	for(int i=0;i<b;i++){
		cin >> x;
		a[x-1] = 0;
	}
	int tong=0, res=0;
	for(int i=0;i<k;i++){
		tong+=a[i];
	}
	for(int i=k;i<n;i++){
		tong = tong-a[i-k]+a[i];
		if(tong > res) res=tong;
	}
	if(res >= k) cout << "0";
	else cout << k-res;
}