#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin , s);
		stringstream ss(s);
		string tmp;
		int d=0;
		while(ss >> tmp){
			d++;
		}
		cout << d << endl;
	}
}
//while(t--){
//		string s;
//		getline(cin , s);
//		int d=1, n=s.size();
//		for(int i=0;i<n;i++){
//			if((s[i-1]==' '||s[i-1]=='\t') && s[i]>='a' && s[i]<='z') d++;
//		}
//		cout << d << endl;
//	}