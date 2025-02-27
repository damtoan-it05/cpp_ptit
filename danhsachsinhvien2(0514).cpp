#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string id,name,lop,ns;
	float gpa;
};
void chuanhoa(string &s){
	string res="";
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		res+=tmp+" ";
	}
	s=res;
}
void nhap(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		if(i<9){
			a[i].id="B20DCCN00"+to_string(i+1);
		}
		else if(i<99){
			a[i].id="B20DCCN0"+to_string(i+1);
		}
		cin.ignore();
		getline(cin, a[i].name);
		chuanhoa(a[i].name);
		cin >> a[i].lop >> a[i].ns >> a[i].gpa;
		if(a[i].ns[1]=='/') a[i].ns.insert(0,"0");
		if(a[i].ns[4]=='/') a[i].ns.insert(3,"0");
	}
}
void in(SinhVien a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].id << " " << a[i].name << a[i].lop << " " << a[i].ns << " ";
		cout << fixed << setprecision(2) << a[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}