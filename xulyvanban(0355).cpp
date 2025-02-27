#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		int ok=1;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			int x=tmp.size();
			if(ok){
				tmp[0]-=32;
				ok=0;
			}
			if(tmp[x-1]=='.' || tmp[x-1]=='?' || tmp[x-1]=='!'){
				ok=1;
				tmp.erase(x-1);
				cout << tmp << endl;
			}
			else{
				cout << tmp << " ";
			}
		}
	}
}