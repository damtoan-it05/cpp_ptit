#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		map<int, int> mp;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int ok=1;
		for(int i=0;i<n;i++){
			if(mp[a[i]+k]){
				cout << "1" << endl;
				ok=0;
				break;
			}
		}
		if(ok) cout << "-1" << endl;
	}
}