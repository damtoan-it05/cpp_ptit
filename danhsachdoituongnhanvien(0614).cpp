#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string id, ht, gt, ns, dc, mst, hd; 
	public:
		friend istream &operator >> (istream &cin, NhanVien &a);
		friend ostream &operator << (ostream &cout, NhanVien a);
};
int x=0;
istream &operator >> (istream &cin, NhanVien &a){
	if(x<9) a.id="0000"+to_string(++x);
	else if(x<99) a.id="000"+to_string(++x);
	cin.ignore();
	getline(cin, a.ht);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.hd;
	return cin;
}
ostream &operator << (ostream &cout, NhanVien a){
	cout << a.id << " " << a.ht << " " << a.gt << " " << a.ns << " ";
	cout << a.dc << " " << a.mst << " " << a.hd << endl;
	return cout;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}