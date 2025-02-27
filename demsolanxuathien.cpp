#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,x;
		cin >> n >> m;
		map<int,int> a;
		for(int i=0;i<n;i++){
			cin >> x;
			a[x]++;
		}
		if(a[m]){
			cout << a[m];
		}
		else cout << "-1";
		cout << endl;
	}
}