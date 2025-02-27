#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int x,b[100005]={0};
		for(int i=0;i<n;i++){
			cin >> x;
			b[x]++;
		}
		for(int i=0;i<m;i++){
			cin >> x;
			b[x]++;
		}
		for(int i=0;i<100005;i++){
			if(b[i]){
				cout << i << " ";
			}
		}
		cout << endl;
		for(int i=0;i<100005;i++){
			if(b[i]>1){
				cout << i << " ";
			}
		}
		cout << endl;
	}
}