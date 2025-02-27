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
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, c=0;
		cin >> n;
		for(int i=1;i<=n;i++){
			int k=ucln(i,n);
			if(k==1) c++;
		}
		if(check(c)) cout << "1";
		else cout << "0";
		cout << endl;
	}
}