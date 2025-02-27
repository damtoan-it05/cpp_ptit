#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int x=s.size(), tong=0;
		for(int i=0;i<x;i++){
			tong+=s[i]-'0';
		}
		while(tong>9){
			int n=tong, tmp=0;
			while(n){
				tmp+=n%10;
				n/=10;
			}
			tong = tmp;
		}
		if(tong==9) cout << "1";
		else cout << "0";
		cout << endl;
	}
}