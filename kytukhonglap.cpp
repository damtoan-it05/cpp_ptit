#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size(), a[27]={0};
		for(int i=0;i<n;i++){
			a[s[i]-'A']++;
		}
		for(int i=0;i<n;i++){
			if(a[s[i]-'A']==1){
				cout << s[i];
			}
		}
		cout << endl;
	}
}