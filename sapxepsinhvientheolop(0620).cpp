#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string id ,name, lop, email;
		void nhap(){
			cin >> id;
			cin.ignore();
			getline(cin, name);
			cin >> lop >> email;
		}
		void xuat(){
			cout << id << " " <<  name  << " " << lop << " " << email << endl;
		}
};
bool cmp(SinhVien a, SinhVien b){
	if(a.lop == b.lop){
		return a.id <b.id;
	}
	else {
		return a.lop < b.lop;
	}
}
void sapxep(SinhVien a[], int n){
	sort(a, a+n ,cmp);
}
int main(){
	int n;
	cin >> n;
	SinhVien SV[n];
	for(int i=0;i<n;i++){
		SV[i].nhap();
	}
	sapxep(SV, n);
	for(int i=0;i<n;i++){
		SV[i].xuat();
	}
	return 0;
}