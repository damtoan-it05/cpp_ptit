#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		long long n, sum=0;
		cin >> s >> n;
		for(int i=0;i<s.size();i++){
			sum = sum*10 + (s[i]-'0');
			sum %= n;
		}
		cout << sum << endl;
	}
}