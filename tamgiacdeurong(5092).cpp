#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int x=n;
	for(int i=0;i<n-1;i++){
		for(int j=1;j<=2*n;j++){
			if(j==x) cout << "*";
			else if(j==n+i) cout << "*"; 
			else cout << " ";
		}
		x--;
		cout << endl;
	}
	for(int i=1;i<=n;i++){
		cout << "*" << " ";
	}
}