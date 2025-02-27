#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size(), tong=0;
		for(int i=0;i<n;i++){
			int x=0;
			while(isdigit(s[i])){
				int tmp=s[i]-'0';
				x= x*10+tmp;
				i++;
			}
			tong+=x;
		}
		cout << tong << endl;
	}
}