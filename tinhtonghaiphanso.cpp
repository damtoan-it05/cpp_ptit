#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu ,mau;
};
long long ucln(long long n, long long m){
	while(m){
		long long tmp=n%m;
		n=m;
		m=tmp;
	}
	return n;
}
long long bcnn(long long n, long long m){
	return n*m/ucln(n,m);
}
void nhap(struct PhanSo &a){
	cin >> a.tu >> a.mau;
}
void rutgon(struct PhanSo &a){
	long long tmp=ucln(a.tu,a.mau);
	a.tu/=tmp;
	a.mau/=tmp;
}
struct PhanSo tong(struct PhanSo &p, struct PhanSo &q){
	struct PhanSo a;
	long long x=bcnn(p.mau,q.mau);
	long long y=x/p.mau;
	long long z=x/q.mau;
	p.mau=x;p.tu*=y;
	q.mau=x;q.tu*=z;
	a.tu=p.tu+q.tu;a.mau=x;
	rutgon(a);
	return a;
}
void in(struct PhanSo a){
	cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}