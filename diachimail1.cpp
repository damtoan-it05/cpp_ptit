#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int n=s.size();
	for(int i=0;i<n;i++){
		s[i]=tolower(s[i]);
	}
	vector<string> a;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		a.push_back(tmp);
	}
	int m=a.size();
	cout << a[m-1];
	for(int i=0;i<m-1;i++){
		cout << a[i][0];
	}
	cout << "@ptit.edu.vn";
}