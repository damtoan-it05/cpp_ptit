#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string tmp="100";
		int cnt=0,it;
		while((it=s.find(tmp))!=string::npos){
			s.erase(it,3);
	       	cnt+=3;
		}
		if(!cnt) cout << endl;
		else cout << cnt << endl;
	}
}