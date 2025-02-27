#include<bits/stdc++.h>
using namespace std;
struct ThucTap{
	int stt;
	string id, name, lop, email, dn;
};
void nhap(ThucTap a[], int n){
	for(int i=0;i<n;i++){
		a[i].stt = i+1;
		cin >> a[i].id;
		cin.ignore();
		getline(cin, a[i].name);
		cin >> a[i].lop >> a[i].email >> a[i].dn;
	}
}
bool cmp(ThucTap a, ThucTap b){
	return a.id <b.id;
}
void sapxep(ThucTap a[], int n){
	sort(a,a+n,cmp);
}
int main(){
	int n;
	cin >> n;
	struct ThucTap tt[n];
	nhap(tt,n);
	sapxep(tt,n);
	int x;
	cin >> x;
	while(x--){
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
			if(tt[i].dn==s){
				cout << tt[i].stt << " " << tt[i].id << " " << tt[i].name << " ";
				cout << tt[i].lop << " " << tt[i].email << " " << tt[i].dn << endl;
			} 
		}
	}
}