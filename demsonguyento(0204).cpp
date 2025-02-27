#include<bits/stdc++.h>
using namespace std;
int prime[1000006];
void sang(){
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<1000006;i++){
		prime[i]=1;
	}
	for(int i=2;i<=1000;i++){
		if(prime[i]){
			for(int j=i*i;j<1000006;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int a, b, c=0;
		cin >> a >> b;
		for(int i=a;i<=b;i++){
			if(prime[i]) c++;
		}
		cout << c << endl;
	}
}