#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long s=0, res=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			s+=a[i];
			if(s<0) s=0;
			res=max(res,s);
		}
		if(res==0){
			sort(a,a+n);
			res=a[n-1];
		}
		cout << res << endl;
	}
}