#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin , s);
	string a;
	cin >> a;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		if(tmp != a){
			cout << tmp << " ";
		}
	}
}