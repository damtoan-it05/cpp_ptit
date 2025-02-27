#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n][n];
		int b[100005]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
				if(b[a[i][j]]==i)
				b[a[i][j]]++;
			}
		}
		int c=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(b[a[i][j]]==n){
				   c++;
				   b[a[i][j]]=0;	
				}
			}
		}
		cout << c << endl;
	}
}