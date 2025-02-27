#include<bits/stdc++.h>
using namespace std;
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
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long n,long long m){
			tu=n;
			mau=m;
		}
		friend istream &operator >> (istream &in, PhanSo &a);
		friend ostream &operator << (ostream &out, PhanSo a);
		friend PhanSo operator + (PhanSo a, PhanSo b);
};
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo kq(1,1);
	kq.tu=a.tu*b.mau + b.tu*a.mau;
	kq.mau=a.mau*b.mau;
	long long k=ucln(kq.tu,kq.mau);
	kq.tu/=k;
	kq.mau/=k;
	return kq;
}
istream &operator >> (istream &in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}
ostream &operator <<(ostream &out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}