#include<bits/stdc++.h>
using namespace std;
struct DanhSach{
	string name, nhom;
	float ban, mua, loi;
	int id;
};
void nhap(DanhSach a[], int n){
	for(int i=0;i<n;i++){
		a[i].id=i+1;
		cin.ignore();
		getline(cin, a[i].name);
		getline(cin, a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].loi=a[i].ban-a[i].mua;
	}
}
bool cmp(DanhSach a, DanhSach b){
	return a.loi>b.loi;
}
void sapxep(DanhSach a[], int n){
	sort(a, a+n, cmp);
}
void in(DanhSach a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].id << " " << a[i].name << " "<< a[i].nhom << " " << fixed << setprecision(2) << a[i].loi << endl;
	}
}
int main(){
    struct DanhSach ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds, N);
    in(ds, N);
    return 0;
}