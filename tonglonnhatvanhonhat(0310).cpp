#include<bits/stdc++.h>
using namespace std;
long long lon(string n){
	int x=n.size();
	long long tmp=0;
	for(int i=0;i<x;i++){
		if(n[i]!='5'){
			tmp=tmp*10+(n[i]-'0');
		}
		else tmp=tmp*10+6;
	}
	return tmp;
}
long long nho(string n){
	int x=n.size();
	long long tmp=0;
	for(int i=0;i<x;i++){
		if(n[i]!='6'){
			tmp=tmp*10+(n[i]-'0');
		}
		else tmp=tmp*10+5;
	}
	return tmp;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string x1,x2;
		cin >> x1 >> x2;
		long long a, b, c, d;
		a=lon(x1);b=lon(x2);
		c=nho(x1);d=nho(x2);
		cout << c+d << " " << a+b;
		cout << endl;
	}
}