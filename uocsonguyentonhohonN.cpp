#include<bits/stdc++.h>
using namespace std;
int s[1000006];
void sang(){
	for(int i=2;i<1000001;i++){
		s[i]=1;
	}
	s[0]=0;s[1]=0;
	for(int i=2;i<=1000;i++){
		if(s[i]){
			for(int j=i*i; j<1000000;j+=i){
				s[j]=0;
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
		for(int i=2;i<=n;i++){
			if(s[i]) cout << i << " ";
		}
		cout << endl;
	}
}