#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int hoanhao(long long n){
	for(int i=1;i<=33;i++){
		if(ngto(i)){
			long long tmp1=pow(2,i)-1;
			if(ngto(tmp1)){
				long long tmp2=pow(2,i-1);
				if(tmp1*tmp2 == n) return 1;
			}
		}
	}
	return 0;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(hoanhao(n)) cout << "1" << endl;
		else cout << "0" << endl;
	}
}