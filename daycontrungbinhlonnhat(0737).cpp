#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int s=0, res,l=0,r=k-1;
		for(int i=0;i<k;i++){
			s+=a[i];
		}
		res=s;
		for(int i=k;i<n;i++){
			s+=a[i]-a[i-k];
			if(res<s){
				res=s;
				l=i-k+1;r=i;
			}
		}
		for(int i=l;i<=r;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}