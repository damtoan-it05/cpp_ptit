#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	vector<string> v;
	map<string,int> mp;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp){
		v.push_back(tmp);
		mp[tmp]++;
	}
	for(int i=0;i<v.size();i++){
		if(mp[v[i]]){
			cout << v[i] << " " << mp[v[i]] << endl;
			mp[v[i]]=0;
		}
	}
}