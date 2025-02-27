#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		vector<string> a;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			a.push_back(tmp);
		}
		int n=a.size();
		for(int i=n-1;i>=0;i--){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}