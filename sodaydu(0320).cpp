#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int x=s.size(), b[10]={0}, ok=1;
		if(s[0]=='0'){
			cout << "INVALID" << endl;
			continue;
		}
		for(int i=0;i<x;i++){
			if(s[i]<'0'||s[i]>'9'){
				cout << "INVALID";
				ok=0;
				break;
			}
			else{
				b[s[i]-'0']=1;
			}
		}
		if(ok){
			for(int i=0;i<10;i++){
				if(b[i]==0){
					cout << "NO";
					ok=0;
					break;
				}
			}
		}
		if(ok) cout << "YES";
		cout << endl;
	}
}