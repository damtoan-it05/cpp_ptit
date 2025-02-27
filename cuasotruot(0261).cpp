#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	cin >> m;
	int b[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin >> b[i][j];
		}
	}
	int i1=0, j1=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i1==m) i1=0;
			if(j1==m) j1=0;
			cout << a[i][j]*b[i1][j1] << " ";
			j1++;
		}
		i1++;
		cout<< endl;
	}
}