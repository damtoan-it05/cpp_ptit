#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n ;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		int x=n/2;
		for(int i=0;i<x ;i++){
			cout << a[n-1-i] << " " << a[i] << " ";
		}
		if(n%2==1)
		cout << a[x];
		cout << endl;
	}
}