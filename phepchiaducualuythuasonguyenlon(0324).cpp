#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		long long b, m, k=0, s=1;
		cin >> a >> b >> m;
		for(int i=0;i<a.size();i++){
			k = k*10+(a[i]-'0');
			k%=m;
		}
		while(b){
			if(b%2==1){
				s*=k;
				s%=m;
			}
			k*=k;
			k%=m;
			b/=2;
		}
		cout << s << endl;
	}
}