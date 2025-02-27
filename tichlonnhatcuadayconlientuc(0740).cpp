#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int t;
 	cin >> t;
 	while(t--){
 		int n;
 		cin >> n;
 		long long a[n];
 		for(int i=0;i<n;i++){
 			cin >> a[i];
		}
		long long s=-1e18;
		for(int i=0;i<n;i++){
 			long long x=1;
 			for(int j=i;j<n;j++){
 				x*=a[j];
 				s=max(x,s);
			 }
		}
		cout << s << endl;
	 }
 }