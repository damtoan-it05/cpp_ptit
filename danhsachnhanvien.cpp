#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name, gt, ns, diachi, mst, ngay;
};
void nhap(struct NhanVien &a){
	cin.ignore();
	getline(cin, a.name);
	cin >> a.gt >> a.ns ;
	cin.ignore();
	getline(cin, a.diachi);
	cin >> a.mst >> a.ngay;
}
void inds(struct NhanVien a[], int n){
	for(int i=0;i<n;i++){
		if(i<9) cout << "0000";
		else cout << "000";
		cout << i+1 << " " << a[i].name << " " << a[i].gt << " " << a[i].ns << " ";
		cout << a[i].diachi << " " << a[i].mst << " " << a[i].ngay << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}