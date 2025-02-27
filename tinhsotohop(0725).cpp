#include<bits/stdc++.h>
using namespace std;
long long c[1004][1004];
long long p=1e9+7;
void tohop(){
	for(int i=0;i<=1000;++i){
		for(int j=0;j<=i;j++){
			if(j==0||j==i) c[i][j]=1;
			else if(j==1||j==i-1) c[i][j]=i;
			else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
				c[i][j]%=p;
			}
		}
	}
}
int main(){
	tohop();
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		cout << c[n][k] << endl;
	}
	return 0;
}