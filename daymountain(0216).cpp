#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int s[n];
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		int a, b, ok=1;
		cin >> a >> b;
		int x=(a+b)/2;
		for(int i=a;i<x;i++){
			if(s[i]>s[i+1]){
				ok=0;
				break;
			}
		}
		for(int i=x;i<b;i++){
			if(s[i]<s[i+1]){
				ok=0;
				break;
			}
		}
		if(ok) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}