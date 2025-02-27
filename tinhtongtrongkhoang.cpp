#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		while(m--){
			int x,y, s=0;
			cin >> x >> y;
			for(int i=x;i<=y;i++){
				s+=a[i]; 
			}
			cout << s << endl;
		}
		cout << endl;
	}
}