#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string id, name, gt, ns, diachi, mst, nk;
	public:
		friend istream &operator >> (istream &in, NhanVien &a);
		friend ostream &operator >> (ostream &out, NhanVien a);
};
istream &operator >> (istream &in, NhanVien &a){
	a.id="00001";
	getline(in,a.name);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in, a.diachi);
	in >> a.mst >> a.nk;
	return in;
}
ostream &operator >> (ostream &out, NhanVien a){
	out << a.id <<" "<< a.name <<" "<< a.gt <<" "<< a.ns <<" ";
	out << a.diachi <<" "<< a.mst <<" "<< a.nk;
	return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}