#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int b[26]={0}, a=s.size();
		for(int i=0;i<a;i++){
			b[s[i]-'a']++;
		}
		int cnt=0;
		for(int i=0;i<26;i++){
			if(b[i]> cnt) cnt=b[i];
		}
		if(2*cnt<=a+1) cout << "1";
		else cout << "0";
		cout << endl;
	}
}