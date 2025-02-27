#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f;
	f.open("VANBAN.in", ios::in);
	string word;
	set<string> se;
	while(f >> word){
		for(int i=0;i<word.length();i++){
			word[i]=tolower(word[i]);
		}
		se.insert(word);
	}
	for(string x : se){
		cout << x << endl;
	}
	f.close();
	return 0;
}