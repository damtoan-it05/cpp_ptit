#include<bits/stdc++.h>
using namespace std;
struct DanhSach{
	string name;
	int ns, th, na;
};
void nhap(DanhSach ds[],int n){
	for(int i=0;i<n;i++){
		cin >> ds[i].name;
		string x;
		cin >> x;
		ds[i].ns=(x[0]-'0')*10+x[1]-'0';
		ds[i].th=(x[3]-'0')*10+x[4]-'0';
		ds[i].na=(x[6]-'0')*1000+(x[7]-'0')*100+(x[8]-'0')*10+x[9]-'0';
	}
}
bool cmp(DanhSach a, DanhSach b){
	if(a.na==b.na){
		if(a.th==b.th) return a.ns>b.ns;
		return a.th>b.th;
	}
	return a.na>b.na;
}
void sapxep(DanhSach ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(DanhSach ds[],int n){
	cout << ds[0].name << endl << ds[n-1].name;
}
int main(){
    struct DanhSach ds[100];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}