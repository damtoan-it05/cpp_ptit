#include<bits/stdc++.h>
using namespace std;
int main(){
	fstream f1, f2;
	f1.open("DATA1.in", ios::in);
	
	string word;
	map<string,int> mp1, mp2,mp3;
	while(f1 >> word){
		for(int i=0;i<word.length();i++){
			word[i]=tolower(word[i]);
		}
		mp1[word]=1;
		mp3[word]++;
	}
	f1.close();
	f2.open("DATA2.in", ios::in);
	while(f2 >> word){
		for(int i=0;i<word.length();i++){
			word[i]=tolower(word[i]);
		}
		mp2[word]=1;
		mp3[word]++;
	}
	for(auto x : mp3){
		cout << x.first << " ";
	}
	cout << endl;
	for(auto x : mp1){
		if(mp2[x.first] > 0 ) cout << x.first << " ";
	}
	f2.close();
	return 0;
}