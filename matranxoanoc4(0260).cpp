#include<bits/stdc++.h>
using namespace std;
int main(){
	
		int n;
		cin >> n;
		int x=n*n, a[n][n], b[x];
		for(int i=0;i < x;i++){
			cin >> b[i];
		}
		sort(b, b+x);
		int cnt=0;
		int c1=0, c2=n-1, h1=0, h2=n-1;
		while(c1<=c2 && h1<=h2){
			for(int i=c1;i<=c2;i++){
				a[h1][i] = b[cnt++];
			}
			h1++;
			for(int i=h1;i<=h2;i++){
				a[i][c2] = b[cnt++];
			}
			c2--;
			for(int i=c2;i>=c1;i--){
				a[h2][i] = b[cnt++];
			}
			h2--;
			for(int i=h2;i>=h1;i--){
				a[i][c1] = b[cnt++];
			}
			c1++;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	
}