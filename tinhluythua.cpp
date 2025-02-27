#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long x, y, p, q;
		cin >> x >> y >> p;
		x%=p;q=x;
		for(int i=1;i<y;i++){
			x*=q;
			x%=p;
		}
		cout << x << endl;
	}
}