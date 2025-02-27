#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name,msv,ns, lop;
	float GPA;
};
void nhap(struct SinhVien &a){
	getline(cin , a.name);
	a.msv="B20DCCN001";
	cin >> a.lop >> a.ns >> a.GPA;
}
void in(struct SinhVien &a){
	if(a.ns[1]=='/') a.ns.insert(0,1,'0');
	if(a.ns[4]=='/') a.ns.insert(3,1,'0');
	cout << a.msv << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.GPA;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}