#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int x=s.size(), ok=1;
		if(s[5]==s[6] && s[6]==s[7] && s[9]==s[10]){
			cout << "YES";
		}
		else if(s[5]==s[6] && s[6]==s[7] && s[7]==s[9] && s[9]==s[10]){
			cout << "YES";
		}
		else if(s[5]<s[6] && s[6]<s[7] && s[7]<s[9] && s[9]<s[10]){
			cout << "YES";
		}
		else{
			for(int i=5;i<x;i++){
				if(i!=8 && s[i]!='6' && s[i]!='8'){
					cout << "NO";
					ok=0;
					break;
				}
			}
			if(ok) cout << "YES";
		}
		cout << endl;
	}
}