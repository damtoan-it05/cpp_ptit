#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int x=n*m;
		int a[x];
		for(int i=0;i<x;i++){
			cin >> a[i];
		}
		sort(a, a+x);
		for(int i=0;i<x;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}