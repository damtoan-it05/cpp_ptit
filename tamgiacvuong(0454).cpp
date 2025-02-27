#include<bits/stdc++.h>
using namespace std;
long long canh(long long a, long long b){
	return a*a+b*b;
}
int tamgiacvuong(long long a[], int n){
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			long long tmp = canh(a[i],a[j]), tmp1=sqrt(tmp);
			if(tmp==tmp1*tmp1){
				for(int k=j+1;k<n;k++){
			    	if(a[k]==tmp1){
			    		cout << "YES" << endl;
			    		return 0;
			    	}
			    	else if(a[k]>tmp1) break;
		    	}
			}	
		}
	}
	cout << "NO" << endl;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		tamgiacvuong(a,n);
	}
}