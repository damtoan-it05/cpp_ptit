#include<iostream>
#include<fstream>
using namespace std;
bool check(string word){
	if(word.size()>10){
		return false;
	}
	for(int i=0;i<word.size();i++){
		if(word[i] > '9'|| word[i] < '0'){
			return false;
		}
	}
	return true;
}
int main(){
	fstream f;
	f.open("DATA.in", ios::in);
	string word;
	long long tong = 0;
	while(f >> word){
		if(check(word)){
			tong += stoi(word);
		}
	}
	cout << tong;
	return 0;
}