#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size(),tong=0,a[26]={0};
		for(int i=0;i<n;i++){
			if(s[i] >= '0' && s[i] <='9'){
				tong+=(s[i] - '0');
			}
			else a[s[i]-'A']++;
		}
		for(int i=0;i<26;i++){
			while(a[i]>0){
				cout << (char)(i+'A');
				a[i]--;
			}
		}
		if(tong) cout << tong << endl;
	}
}