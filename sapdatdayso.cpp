#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long x;
		map<long long, long long> a;
		for(int i=0;i<n;i++){
			cin >> x;
			a[x]++;
		}
		for(int i=0;i<n;i++){
			if(a[i]){
				cout << i << " ";
			}
			else{
				cout << "-1" <<" ";
			}
		}
		cout << endl;
	}
}