#include<bits/stdc++.h>
using namespace std;
void tru(string a, string b){
	int n=a.length();
	if(b.length() > n){
		n=b.length();
		while(a.length()<n){
			a="0"+a;
		}
	}
	else{
		while(b.length()<n){
			b="0"+b;
		}
	}
	if(b>a){
		swap(a,b);
	}
	int x[n], y[n], z[n];
	for(int i=0;i<n;i++) x[i]=a[i]-'0';
	for(int i=0;i<n;i++) y[i]=b[i]-'0';
	int nho=0;
	for(int i=n-1;i>=0;i--){
		z[i]=x[i]-y[i]-nho;
		nho=0;
		if(z[i]<0){
			z[i]+=10;
			nho=1;
		}
	}
	for(int i=0;i<n;i++){
		cout << z[i];
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		tru(a,b);
		cout << endl;
	}
}