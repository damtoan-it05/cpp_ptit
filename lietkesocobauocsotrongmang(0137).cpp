#include<bits/stdc++.h>
using namespace std;
int x=1e6+7;
int prime[1000007];
void sang(){
	for(int i=0;i<x;i++){
		prime[i]=1;
	}
	prime[0]=0;prime[1]=0;
	for(int i=2;i<=1000;i++){
		if(prime[i]){
			for(int j=i*i;j<x;j+=i){
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
		double l,r;
		cin >> l >> r;
		int cnt=0;
		for(int i=ceil(sqrt(l));i<=floor(sqrt(r));i++){
			if(prime[i]) cnt++;
		}
		cout << cnt << endl;
	}
}