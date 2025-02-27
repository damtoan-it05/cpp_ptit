#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][3], h[n];
	for(int i=0;i<n;i++){
		int d=0;
		for(int j=0;j<3;j++){
			cin >> a[i][j];	
			if(a[i][j]==1) d++;
		}
		h[i]=d;
	}
	int t=0;
	for(int i=0;i<n;i++){
		if(h[i]>=2) t++;
	}
	cout << t;
}