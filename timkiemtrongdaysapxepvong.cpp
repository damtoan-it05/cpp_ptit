#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,x;
		cin >> n >> m;
		map<int,int> b;
		for(int i=0;i<n;i++){
			cin >> x;
			b[i]=x;
		}
		for(int i=0;i<n;i++){
			if(b[i]==m){
				cout << i+1 << endl;
				break;
			}
		}
	}
}