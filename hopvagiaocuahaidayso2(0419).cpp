#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,x;
		cin >> n >> m;
		map<int,int> mp;
		for(int i=0;i<n+m;i++){
			cin >> x;
			mp[x]++;
		}
		for(auto x : mp){
			if(x.second){
				cout << x.first << " ";
			}
		}
		cout << endl;
		for(auto x : mp){
			if(x.second==2){
				cout << x.first << " ";
			}
		}
		cout << endl;
	}
}