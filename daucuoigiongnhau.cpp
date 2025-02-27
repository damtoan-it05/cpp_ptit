#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size(), d=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(s[i]==s[j]) d++;
			}
		}
		d+=n;
		cout << d << endl;
	}
}