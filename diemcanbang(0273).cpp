#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			s+=a[i];
		}
		int tong=0, ok=1;
		for(int i=0;i<n;i++){
			tong+=a[i];
			int tmp=tong*2+a[i+1];
			if(tmp==s){
				cout << i+2;
				ok=0;
				break;
			}
		}
		if(ok) cout << "-1";
		cout << endl;
	}
}