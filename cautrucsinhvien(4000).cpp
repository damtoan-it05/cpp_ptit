#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string id, name, lop, ns;
	float gpa;
};
void nhapThongTinSV(struct SinhVien &a){
	a.id="N20DCCN001";
	getline(cin, a.name);
	cin >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1]=='/') a.ns.insert(0,1,'0');
	if(a.ns[4]=='/') a.ns.insert(3,1,'0');
}
void inThongTinSV(struct SinhVien a){
	cout << a.id << "\t" << a.name << "\t" << a.lop << "\t" << a.ns << "\t";
	cout << fixed << setprecision(2) << a.gpa;
}
int main(){
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}