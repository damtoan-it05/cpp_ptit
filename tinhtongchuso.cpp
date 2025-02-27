#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int x=0;
		while(n){
			int tmp=n%10;
			x+=tmp;
			n/=10;
		}
		while(x>=10){
			x = x%10+x/10;
		}
		cout << x << endl;
	}
}