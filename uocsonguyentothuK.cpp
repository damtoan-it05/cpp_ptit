#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, ok=0;
		cin >> n >> m;
		for(int i=2;i<=sqrt(n);i++){
			while(n%i==0){
				m--;
				n/=i;
				if(m==0){
					cout << i;
					ok=1;
					break;
				}
			}
			if(ok) break;
		}
		if(n>1&&m==1) cout << n;
		else if(!ok) cout << "-1";
		cout << endl;
	}
	
}