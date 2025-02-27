#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		map<long long, long long> b;
		for(int i=0;i<n;i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i=0;i<n;i++){
			if(b[a[i]]){
				if(a[i])
					cout << a[i] << " ";
			}
		}
		for(int i=0;i<b[0];i++){
			cout << "0" << " ";
		}
		cout << endl;
	}
}