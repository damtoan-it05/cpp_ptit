#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long x,y,z;
		x=a[0];
		y=max(a[0],a[1]);
		z=x;
		for(int i=2;i<n;i++){
			z=max(y,x+a[i]);
			x=y;
			y=z;
		}
		cout << z << endl;
	}
}