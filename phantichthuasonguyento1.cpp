#include<bits/stdc++.h>
using namespace std;
void phantich(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int d=0;
			while(n%i==0){
				d++;
				n/=i;
			}
			cout << i << " " << d;
			if(n>i) cout << " ";
		}
	}
	if(n>1) cout << n << " " << "1";
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		phantich(n);
		cout << endl;
	}
}