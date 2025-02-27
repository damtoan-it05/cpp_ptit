#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		long long a[n], s=0, c=1;
		for(int i=0;i<n;i++){
			cin >> a[i];			
		}
		for(int i=n-1;i>=0;i--){
			s+=a[i]*c;
			c*=x;
			c%=1000000007;
			s%=1000000007;
		}
		s%=1000000007;
		cout << s << endl;
	}
}