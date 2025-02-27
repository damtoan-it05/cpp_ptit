#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];	
			}
		}
		int c=0;
		while(c<n){
			for(int i=0;i<n;i++){
			    cout << a[c][i] << " ";
    		}
    		c++;
    		if(c>=n) break;
    		for(int i=n-1;i>=0;i--){
			    cout << a[c][i] << " ";
    		}
    		c++;
		}
		cout << endl;
	}
}