#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, tong = 0, max = 0;
		cin >> n;
		int a[n][n], h[n], c[n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n; j++){
				cin >> a[i][j];
				tong+=a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			h[i]=0;c[i]=0;
			for(int j=0;j<n;j++){
				h[i]+=a[i][j];
				c[i]+=a[j][i];
			}
		}
		for(int i=0;i<n;i++){
			if(max < h[i]) max=h[i];
			if(max < c[i]) max=c[i];
		}
		cout << max*n-tong << endl;
	}
}