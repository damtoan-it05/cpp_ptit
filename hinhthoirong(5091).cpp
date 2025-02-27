#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x=n, y=2*n, z=2*n;
	for(int i=0;i<n-1;i++){
		for(int j=1;j<y;j++){
			if(j==x||j==n+i) cout << "*";
			else cout << " ";
		}
		x--;
		cout << endl;
	}
	for(int i=1;i<=y;i++){
		if(i==1||i==y-1) cout << "*";
		else cout << " ";
	}
	cout << endl;
	x++;
	for(int i=0;i<n-1;i++){
		for(int j=1;j<y;j++){
			if(j==x||j==z-x) cout << "*";
			else cout << " ";
		}
		x++;
		cout << endl;
	}
}