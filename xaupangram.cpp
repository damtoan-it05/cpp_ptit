#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int k, d=0; cin >> k;
		int n=s.size(), a[26]={0};
		for(int i=0;i<n;i++){
			a[s[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			if(a[i]==0){
				d++;
			}
		}
		if(d>k) cout << "0";
		if(d<=k) cout << "1";
		cout << endl;
	}
}