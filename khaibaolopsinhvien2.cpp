#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id, name, lop, ns;
		float gpa;
	public:
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};
istream &operator >> (istream &in, SinhVien &a){
	a.id="B20DCCN001";
	getline(in, a.name);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1]=='/') a.ns.insert(0, "0");
	if(a.ns[4]=='/') a.ns.insert(3, "0");
	return in;
}
ostream &operator << (ostream &out, SinhVien a){
	out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}