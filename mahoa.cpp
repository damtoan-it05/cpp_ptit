#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		for(int i=0;i<n;i++){
			int d=1;
			if(s[i]==s[i+1]){
				while(s[i]==s[i+1]){
					d++;i++;
				}
			}
			cout << s[i] << d;
		}
		cout << endl;
	}
}