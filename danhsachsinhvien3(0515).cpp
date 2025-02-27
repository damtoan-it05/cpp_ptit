#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string id, name, lop, ns;
	float gpa;
};
void nhap(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		if(i<9){
			ds[i].id="B20DCCN00"+to_string(i+1);
		}else if(i<99){
			ds[i].id="B20DCCN0"+to_string(i+1);
		}
		getline(cin, ds[i].name);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		if(ds[i].ns[1]=='/') ds[i].ns.insert(0,1,'0');
		if(ds[i].ns[4]=='/') ds[i].ns.insert(3,1,'0');
	}
}
bool cmp(SinhVien A, SinhVien B){
	return A.gpa>B.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout << ds[i].id << " "; 
		stringstream ss(ds[i].name);
		string tmp, res="";
		while(ss >> tmp){
			tmp[0]=toupper(tmp[0]);
			for(int i=1;i<tmp.size();i++){
				tmp[i]=tolower(tmp[i]);
			}
			res += tmp+" ";
		}
		cout << res << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}