#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=1;i<n;i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i=2;i<n;i++){
			if(a[i]-a[i-1] > 1){
				cout << a[i-1]+1;
				break;
			}
		}
		cout << endl;
	}
}