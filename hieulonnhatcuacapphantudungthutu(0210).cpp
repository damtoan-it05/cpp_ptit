#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], s=-1;
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]-a[i]>s) s=a[j]-a[i];
			}
		}
		cout << s << endl;
	}
}