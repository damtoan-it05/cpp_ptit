#include <bits/stdc++.h> 
using namespace std;
string xaudoixung(string s, int l, int r){
	while(l>=0 && r<s.length() && s[l]==s[r]){
		l--;r++;
	}
	return s.substr(l+1, r-l-1);
}
string chuoi(string s){
	string longest=s.substr(0,1);
	for(int i=0;i<s.length();i++){
		string p = xaudoixung(s,i,i+1);
		if(p.length() > longest.length()){
			longest = p;
		}
	}
	if(longest.length()==1) return "";
	return longest;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string tmp = chuoi(s);
		if(tmp.empty()){
			cout << "No";
		}
		else{
			cout << tmp;
		}
		cout << endl;
	}
}