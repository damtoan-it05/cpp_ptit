#include<bits/stdc++.h>
using namespace std;
int prime[1000009];
void sang(){
	for(int i=0;i<1000009;i++){
		prime[i]=i;
	}
	for(int i=2;i<=1005;i++){
		if(prime[i]==i){
			for(int j=i*i;j<1000009;j+=i){
				if(prime[j]==j) prime[j]=i;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i=1;i<=n;i++){
			if(i%2==0) cout << 2 << " ";
			else cout << prime[i] << " ";
		}
		cout << endl;
	}
}