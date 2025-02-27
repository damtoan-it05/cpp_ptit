#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int tong(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

long long tsnt(int n){
	long long res=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			res+=tong(i);
			n/=i;
		}
	}
	if(n!=1) res+=tong(n);
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int s=tong(n);
		long long m=0;
		if(ngto(n)){
			cout << "NO" << endl;
		}
		else{
			m=tsnt(n);
			if(m==s) cout << "YES" << endl;
			else cout << "NO" << endl;
		} 
	}
}