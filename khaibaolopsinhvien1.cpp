#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id, name, lop, ns;
	    float gpa;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap(){
	getline(cin, name);
	id="B20DCCN001";
	cin >> lop >> ns >> gpa;
}
void SinhVien::xuat(){
	if(ns[1]=='/') ns.insert(0,1,'0');
	if(ns[4]=='/') ns.insert(3,1,'0');
	cout << id << " " << name << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}