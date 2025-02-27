#include<bits/stdc++.h>
using namespace std;
long long f[100];
void fibonacci(){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	fibonacci();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << f[n] << endl;
	}
}