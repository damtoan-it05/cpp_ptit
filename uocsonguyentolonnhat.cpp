#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long max=0;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				if(i>max) max=i;
				n/=i;
			}
		}
		if(n>1) max = n;
		cout << max << endl;
	}
}