#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int tong=0;
		for(int i=0;i<=s.size();i++){
			int tmp=0;
			while(s[i] >= '0' && s[i] <='9'){
				tmp = tmp*10 + s[i]-'0';
				i++;
			}
			if(tmp > tong) tong=tmp;
		}
		cout << tong << endl;
	}
}