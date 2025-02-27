#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n];
		long long s=0;
		map<long long,long long> b;
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(b[m-a[i]]){
				if(a[i]==m-a[i]) s+=b[m-a[i]]-1;
				else s+=b[m-a[i]];
			}
		}
		cout << s/2 << endl;
	}
}