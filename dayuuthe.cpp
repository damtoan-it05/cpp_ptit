#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int x, d=0, c=0, l=0;
		while(1){
			cin >> x;
			d++;
			if(x%2==0) c++;
			else l++;
			char s = getchar();
			if(s =='\n') break;
		}
		if(c>l && d%2==0||c<l && d%2==1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}