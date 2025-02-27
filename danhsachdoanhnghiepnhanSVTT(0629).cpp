#include<bits/stdc++.h>
using namespace std;
class DanhSach{
	public:
	    string id, name;
	    int sl;
		void nhap(){
			cin >> id;
			cin.ignore();
			getline(cin, name);
			cin >> sl;
		}
		void in(){
			cout << id << " " << name << " " << sl << endl;
		}
};
bool cmp(DanhSach a, DanhSach b){
	if(a.sl!=b.sl) return a.sl>b.sl;
	return a.id < b.id;
}
void sapxep(DanhSach a[], int n){
	sort(a, a+n, cmp);
}
int main(){
	int n;
	cin >> n;
	DanhSach DS[n];
	for(int i=0;i<n;i++){
		DS[i].nhap();
	}
	sapxep(DS, n);
	int t;
	cin >> t;
	while(t--){
		int x,y;
		cin >> x >> y;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << x <<" DEN " << y << " SINH VIEN" <<":" << endl;
    	for(int i=0;i<n;i++){
		    if(DS[i].sl>=x && DS[i].sl<=y){
		    	DS[i].in();
			}
	    }
	}
	return 0;
}