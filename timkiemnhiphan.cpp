#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,x,ok=-1;
		cin >> n >> m;
		for(int i=0;i<n;i++){
			cin >> x;
			if(x==m) ok=1;
		}
		cout << ok << endl;
	}
}