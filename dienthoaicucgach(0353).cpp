#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int l=0, r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]) return 0;
		l++;r--;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string x ="";
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
			if(s[i]>='a' && s[i] <='c'){
				x+="2";
			}
			else if(s[i]>='d' && s[i] <='f'){
				x+="3";
			}
			else if(s[i]>='g' && s[i] <='i'){
				x+="4";
			}
			else if(s[i]>='j' && s[i] <='l'){
				x+="5";
			}
			else if(s[i]>='m' && s[i] <='o'){
				x+="6";
			}
			else if(s[i]>='p' && s[i] <='s'){
				x+="7";
			}
			else if(s[i]>='t' && s[i] <='v'){
				x+="8";
			}
			else if(s[i]>='w' && s[i] <='z'){
				x+="9";
			}
		}
		if(check(x)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}