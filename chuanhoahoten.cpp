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
		tmp[0]=toupper(tmp[0]);
		a.push_back(tmp);
	}
	int m=a.size(), x=a[m-1].size();
	for(int i=0;i<x;i++){
		a[m-1][i]=toupper(a[m-1][i]);
	}
	for(int i=0;i<m-2;i++){
		cout << a[i] << " ";
	}
	cout << a[m-2] << "," << " " << a[m-1];
}