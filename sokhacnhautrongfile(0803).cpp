#include<iostream>
#include<fstream>
#include<map>
using namespace std;
int main(){
	fstream f;
	f.open("DATA.in", ios::in);
	int word;
	map<int, int> mp;
	while(f >> word){
		mp[word]++;
	}
	for(auto x : mp){
		cout << x.first << " " << x.second << endl;
	}
	f.close();
}