#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int ok=1;
		int n=a.size();
		for(int i=0;i<n-1;i++){
			if(a[i]+1 != a[i+1] && a[i]-1 != a[i+1]){
				cout << "NO" << endl;
				ok=0;
				break;
			}
		}
		if(ok) cout << "YES" << endl;
	}
}