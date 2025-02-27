#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string id, ht, gt, ns, dc, mst, hd; 
	public:
		int ng, th, na;
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
	a.th=(a.ns[0]-'0')*10+(a.ns[1]-'0');
	a.ng=(a.ns[3]-'0')*10+(a.ns[4]-'0');
	a.na=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+(a.ns[9]-'0');
	return cin;
}
bool cmp(NhanVien a,NhanVien b){
	if(a.na!=b.na) return a.na<b.na;
	else{
		if(a.th!=b.th) return a.th<b.th;
		else return a.ng<b.ng;
	}
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
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
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}