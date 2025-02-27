#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int n=s.length();
	int l=0,r=n-1;
	while(l<r){
		if(s[l]!=s[r]) return 0;
		l++; r--;
	}
	return n>1;
}
struct cmp{
	bool operator () (string a,string b){
		if(a.size()==b.size()){
			return a>b;
		}
		else return a.size()>b.size();
	}
};
int main(){
	string s;
	map <string, int, cmp> mp;
	while(cin >> s){
		if(check(s)){
			mp[s]++;
		}
	}
	for(auto x: mp){
		cout << x.first << " " << x.second << endl;
	}
}