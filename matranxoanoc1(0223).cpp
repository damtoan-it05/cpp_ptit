#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m], x=n*m;
		int b[x];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int h1=0,h2=n-1,c1=0,c2=m-1, c=0;
		while(h1<=h2 && c1<=c2){
			for(int i=c1;i<=c2;i++){
				b[c++]=a[h1][i];
			}
			h1++;
			for(int i=h1;i<=h2;i++){
				b[c++]=a[i][c2];
			}
			c2--;
			for(int i=c2;i>=c1;i--){
				b[c++]=a[h2][i];
			}
			h2--;
			for(int i=h2;i>=h1;i--){
				b[c++]=a[i][c1];
			}
			c1++;
		}
		for(int i=0;i<x;i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}