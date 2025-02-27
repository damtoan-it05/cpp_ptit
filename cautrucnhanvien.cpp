#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv, name , gt , ns , diachi , mst ,ngay; 
};
void nhap(struct NhanVien &a){
	getline(cin , a.name);
	a.mnv = "00001";
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.diachi);
	cin >> a.mst >> a.ngay;
}
void in(struct NhanVien &a){
	cout << a.mnv << " " << a.name << " " << a.gt << " " << a.ns << " ";
	cout << a.diachi << " " << a.mst << " " << a.ngay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}