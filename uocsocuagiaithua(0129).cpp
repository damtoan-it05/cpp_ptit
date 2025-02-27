#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p,x=0;
		cin >> n >> p;
		for(int i=1;i<=n;i++){
			int tmp=i;
			while(tmp%p == 0){
				x++;
				tmp/=p;
			}
		}
		cout << x << endl;
	}
}