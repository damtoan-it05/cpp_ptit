#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		string res="";
		while(ss >> tmp){
			for(int i=0;i<tmp.size();i++){
				tmp[i]=tolower(tmp[i]);
			}
			v.push_back(tmp);
		}
		int n=v.size();
		res +=v[n-1];
		for(int i=0;i<n-1;i++){
			res += v[i][0];
		}
		if(mp.count(res)==0){
			cout << res;
		}
		else{
			cout << res << mp[res]+1;
		}
		mp[res]++;
		cout << "@ptit.edu.vn" << endl;
	}
}