#include<bits/stdc++.h>
using namespace std;
int check(int n){
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	int n,m;
	cin >> n >> m;
	if(n > m){
		int tmp = n;
		n=m;
		m=tmp;
	}
	for(int i=n;i<=m;i++){
		if(check(i)){
			cout << i << " ";
		}
	}
}