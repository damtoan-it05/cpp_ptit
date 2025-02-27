#include<bits/stdc++.h>
using namespace std;
int x=0;
void chuanhoa(string &s){
	stringstream ss(s);
	string tmp;
	string res="";
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		res+=tmp[0];
	}
	s=res;
}
struct GiangVien{
	string id, name, bm;
	void nhap(){
		if(x<9) id="GV0"+to_string(++x);
		else if(x<99) id="GV"+to_string(++x);
		getline(cin, name);
		getline(cin,bm);
		chuanhoa(bm);
	}
	void in(){
		cout << id << " " << name << " " << bm << endl;
	}
};

int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct GiangVien GV[n];
	for(int i=0;i<n;i++){
		GV[i].nhap();
	}
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		chuanhoa(s);
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
		for(int i=0;i<n;i++){
			if(GV[i].bm==s){
				GV[i].in();
			}
		}
	}
}