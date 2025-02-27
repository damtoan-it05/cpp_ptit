#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n], d=0, cnt=0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			if(a[i]<=k) d++;
		}
		for(int i=0;i<d;i++){
			if(a[i]<=k) cnt++;
		}
		int res=cnt;
		for(int i=d;i<n;i++){
			if(a[i-d]<=k) cnt--;
			if(a[i]<=k) cnt++;
			if(res < cnt) res=cnt;
		}
		cout << d-res << endl;
	}
	return 0;
}