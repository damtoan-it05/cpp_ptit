#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b, c, tmp=0;
		cin >> a >> b >> c;
		while(b){
			if(b%2) tmp=(tmp+a)%c;
			a=(a*2)%c;
			b/=2;
		}
		cout << tmp << endl;
	}
}