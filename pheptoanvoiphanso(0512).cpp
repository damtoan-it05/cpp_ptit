#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu, mau;
};
long long uoc(long long n, long long m){
	while(m){
		long long tmp=n%m;
		n=m;
		m=tmp;
	}
	return n;
}
void rutgon(PhanSo &A){
	long long tmp = uoc(A.tu,A.mau);
	A.tu /=tmp;
	A.mau /=tmp;
}
void process(PhanSo A, PhanSo B){
	PhanSo C, D;
	rutgon(A);rutgon(B);
	C.tu=A.tu*B.mau + A.mau*B.tu;
	C.tu=C.tu*C.tu;
	C.mau= A.mau*B.mau;
	C.mau=C.mau*C.mau;
	rutgon(C);
	cout << C.tu << "/" << C.mau << " ";
	cout << " ";
	D.tu=A.tu*B.tu*C.tu;
	D.mau= A.mau*B.mau*C.mau;
	rutgon(D);
	cout << D.tu << "/" << D.mau << " " << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}