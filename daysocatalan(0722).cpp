#include<bits/stdc++.h>
using namespace std;
int m=2e4+5;
int s[20005],a[20005],d,n;
void tsnt(int a, int b){
	for(int i=2;i<=sqrt(a);i++){
		while(a%i==0){
			s[i]+=b;
			a/=i;
		}
	}
	if(a!=1) s[a]+=b;
}
void nhan(int x){
	d+=5;
	for(int i=0;i<d;i++) a[i]*=x;
	for(int i=0;i<d;i++){
		a[i+1]+=a[i]/10;
		a[i]%=10;
	}
	while(a[d-1]==0 && d>0) --d;
}
void cata(){
	for(int i=0;i<n-1;i++){
		tsnt(2*n-i, 1);
	}
	for(int i=0;i<=n;i++){
		tsnt(i, -1);
	}
	a[0]=1;d=1;
	for(int i=2;i<m;i++){
		while(s[i]--){
			nhan(i);
		}
	}
	for(int i=d-1;i>=0;i--){
		cout << a[i];
	}
}
int main(){
	cin >> n;
	n++;
	cata();
	return 0;
}