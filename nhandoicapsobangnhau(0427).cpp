#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[i]=0;
		}
		int cnt = 0;
		for(int i=0;i<n;i++){
			if(a[i] != 0){
				if(a[i]==a[i+1]){
					b[cnt++]=2*a[i];
				    a[i+1]=0;
				}
				else if(a[i]!=a[i+1]){
				    b[cnt++]=a[i];
		    	}
			}
		}
		for(int i=0;i<n;i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}