#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, ok=1;
		cin >> a >> b;
		for(int i=0; i<b;i++){
			if(a*i%b==1){
				cout << i << endl;
				ok=0;
				break;
			}
		}
		if(ok) cout << "-1" << endl;
	}
}