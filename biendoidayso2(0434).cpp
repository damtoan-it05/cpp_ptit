#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			if(i!=0 && i!=n-1){
				b[i]=a[i-1]*a[i+1];
			}
			else if(i==0){
				b[i]=a[i]*a[i+1];
			}
			else if(i==n-1){
				b[i]=a[i]*a[i-1];
			}
		}
		for(int i=0;i<n;i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}