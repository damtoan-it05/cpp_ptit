#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n, a, b, c=0;
		cin >> m >> n >> a >> b;
		for(int i=m;i<=n;i++){
			if(i%a==0) c++;
			 else if(i%b==0) c++;
		}
		cout << c << endl;
	}
}