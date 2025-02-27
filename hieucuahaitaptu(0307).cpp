#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string s1;
		getline(cin, s1);
		stringstream ss(s);
		string tmp;
		set<string> se;
		while(ss >> tmp){
			se.insert(tmp);
		}
		stringstream ss1(s1);
		while(ss1 >> tmp){
			se.erase(tmp);
		}
		for(string x : se){
			cout << x << " ";
		}
		cout << endl;
	}
}