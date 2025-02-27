#include<bits/stdc++.h>
using namespace std;
void tru(string a, string b){
	int n=a.length();
	while(b.length()<n){
		b="0"+b;
	}
// dua ve mang
	int x[n], y[n], z[n+1], c=0;
	for(int i=n-1;i>=0;i--){
		x[c]=a[i]-'0';
	    y[c]=b[i]-'0';
	    c++;
	}
	int nho=0, ok=1;
// tinh gia tri tung phan tu
	for(int i=0;i<n;i++){
		z[i]=x[i]+y[i]+nho;
		if(z[i]>=10){
			nho=1;
			z[i]-=10;
			// neu tong hai so tao thanh so co n+1 cs ( VD: 5+6=11)
			if(i==n-1){
				z[n]=nho;
				ok=0;
			}
		}
		else nho=0;
	}
	if(ok) n--;
	for(int i=n;i>=0;i--){
		cout << z[i];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		if(a.length() < b.length()){
			tru(b,a);
		}
		else tru(a,b);
		cout << endl;
	}
}