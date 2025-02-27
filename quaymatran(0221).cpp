#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m], a1[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
				a1[i][j]=a[i][j];
			}
		}
		int c1=0, c2=m-1, h1=0, h2=n-1;
		while(c1<=c2 && h1<=h2){
			for(int i=c1+1;i<=c2;i++){
				a[h1][i]=a1[h1][i-1];
			}
			for(int i=h1+1;i<=h2;i++){
				a[i][c2]=a1[i-1][c2];
			}
			for(int i=c2-1;i>=c1;i--){
				a[h2][i]=a1[h2][i+1];
			}
			for(int i=h2-1;i>=h1;i--){
			    a[i][c1]=a1[i+1][c1];
			}
			c1++; c2--;h1++;h2--;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}
}