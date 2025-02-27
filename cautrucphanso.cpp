#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long x, y;
};
long long ucln(long long n ,long long m){
	while(m){
		long long tmp=n%m;
		n=m;
		m=tmp;
	}
	return n;
}
void nhap(struct PhanSo &a){
	cin >> a.x >> a.y;
}
void rutgon(struct PhanSo &a){
	long long m=ucln(a.x,a.y);
	a.x/=m;
	a.y/=m;
}
void in(struct PhanSo a){
	cout << a.x << "/" << a.y;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}