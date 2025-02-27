#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,ok=1;
		cin >> n >> m;
		int a[n];
		map<int,int> b;
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i+1]=a[i];
		}
		for(int i=1;i<=n;i++){
			if(b[i]==m){
				cout << i;
				ok =0;
				break;
			}
		}
		if(ok) cout << "-1";
		cout << endl;
	}
}