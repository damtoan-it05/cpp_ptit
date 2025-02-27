#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string id, name, gt, ns, dc, mst, nkhd;
};
int x=0;
void nhap(NhanVien &a){
	if(x<9){
		a.id="0000"+to_string(x+1);
		x++;
	}
	else if(x<99){
		a.id="000"+to_string(x+1);
		x++;
	}
	cin.ignore();
	getline( cin, a.name);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.mst >> a.nkhd;
	if(a.ns[1]=='/') a.ns.insert(0,"0");
	if(a.ns[4]=='/') a.ns.insert(3,"0");
}
bool cmp(NhanVien a, NhanVien b){
	int d1, d2, t1, t2, n1, n2;
	n1= (a.ns[6]-'0')*1000 + (a.ns[7]-'0')*100 + (a.ns[8]-'0')*10 + (a.ns[9]-'0'); 
	n2= (b.ns[6]-'0')*1000 + (b.ns[7]-'0')*100 + (b.ns[8]-'0')*10 + (b.ns[9]-'0');
	if(n1!=n2) return n1 < n2;
	else{
		t1=(a.ns[0]-'0')*10+(a.ns[1]-'0');
		t2=(b.ns[0]-'0')*10+(b.ns[1]-'0');
		if(t1!=t2) return t1 < t2;
		else{
			d1=(a.ns[3]-'0')*10+(a.ns[4]-'0');
			d2=(b.ns[3]-'0')*10+(b.ns[4]-'0');
			return d1 < d2;
		}
	}
}
void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}
void inds(NhanVien a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].id << " " << a[i].name << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " ";
		cout << a[i].mst << " " << a[i].nkhd << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}