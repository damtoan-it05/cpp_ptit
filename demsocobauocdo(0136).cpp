#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void dem(long long n){
	int c=0;
	for(int i=2;i<=sqrt(n);i++){
		if(ngto(i)) c++;
	}
	cout << c;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		dem(n);
		cout << endl;
	}
}