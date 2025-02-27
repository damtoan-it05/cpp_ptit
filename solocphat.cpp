#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, ok = 1;
		cin >> n;
		while(n&&ok){
			int x = n%10;
			if(x != 0&&x != 6&&x != 8){
				cout << "NO" << endl;
				ok = 0;
			}
			n/=10;
		}
		if(ok) cout << "YES" << endl;
	}
}