#include<bits/stdc++.h>
using namespace std;
long long giaithua(int n){
	long long x = 1;
	for(int i=1;i<=n;i++){
		x *= i;
	}
	return x;
}
int main(){
	int n;
	cin >> n;
	long long s=0;
	for(int i=1;i<=n;i++){
		long long tmp = giaithua(i);
		s += tmp;
	}
	cout << s;
}