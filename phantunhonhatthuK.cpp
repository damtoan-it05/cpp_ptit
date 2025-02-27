#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], max=0;
		for(int i=0;i<n; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		cout << a[m-1] << endl;
	}
}