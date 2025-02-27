#include<bits/stdc++.h>
using namespace std;
struct ThucTap{
	string id, name, lop, email, dn;
	int stt;
};
void nhap(ThucTap tt[], int n){
	for(int i=0;i<n;i++){
		tt[i].stt=i+1;
		cin >> tt[i].id;
		cin.ignore();
		getline(cin,tt[i].name);
		cin >> tt[i].lop >> tt[i].email >> tt[i].dn;
	}
}
bool cmp(ThucTap a,ThucTap b){
	return a.name < b.name;
}
void sx(ThucTap a[], int n){
	sort(a, a+n, cmp);
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	ThucTap tt[t];
	nhap(tt,t);
	sx(tt,t);
	int n;
	cin >> n;
	string a;
	while(n--){
		cin >> a; 
		for(int i=0;i<t;i++){
			if(tt[i].dn == a){
			    cout << tt[i].stt << " " << tt[i].id << " " << tt[i].name << " " << tt[i].lop << " " << tt[i].email << " " << tt[i].dn << endl;
	    	}
		}
	}
}