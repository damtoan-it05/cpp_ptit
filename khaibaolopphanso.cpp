#include<bits/stdc++.h>
using namespace std;
long long ucln(long long n, long long m){
	while(m){
		long long tmp =n%m;
		n=m;
		m=tmp;
	}
	return n;
}
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau){
			this->tu=tu;
			this->mau=mau;
		}
		void rutgon();
		friend istream &operator >> (istream &in , PhanSo &a);
		friend ostream &operator << (ostream &out , PhanSo a);
};
istream &operator >> (istream &in , PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}
void PhanSo::rutgon(){
	long long tmp=ucln(tu,mau);
	tu/=tmp;
	mau/=tmp;
}
ostream &operator << (ostream &out , PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}