#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x,ok=0,c=0;
		cin >> n;
		map<int,int> a;
		for(int i=0;i<n;i++){
			cin >> x;
			a[x]++;
			if(a[x]==2&&ok==0){
				ok=1;
				c=x;
			}
		}
		if(c){
			cout << c;
		}
		else cout << "-1";
		cout << endl;
	}
}