#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][m], h[102]={0},c[102]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
				if(a[i][j]==1){
					h[i]++;
					c[j]++;
				}
			}
		}
		for(int i=0;i<102;i++){
			int x=h[i], y=c[i];
			if(x){
				for(int j=0;j<m;j++){
					a[i][j]=1;
				}
			}
			if(y){
				for(int j=0;j<n;j++){
					a[j][i]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout << a[i][j] << " ";	
			}
			cout << endl;
		}
		cout << endl;
	}
}