#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		long long s=0;
		while(1){
			int m=0;
			for(int i=0;i<n;i++){
				if(a[i]%2==1){
					s++;
					a[i]--;
				}
				if(!a[i]) m++;
			}
			if(m==n) break;
			for(int i=0;i<n;i++){
				a[i]/=2;
			}
			s++;
		}
		cout << s << endl;
	}
}