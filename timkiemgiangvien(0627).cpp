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
class GiangVien{
	public:
		string id, name, bm;
		friend istream &operator >> (istream &cin, GiangVien &a);
		friend ostream &operator << (ostream &cout, GiangVien a);
};
istream &operator >> (istream &cin, GiangVien &a){
	if(x<9) a.id="GV0"+to_string(++x);
	else if(x<99) a.id="GV"+to_string(++x);
	getline(cin, a.name);
	getline(cin, a.bm);
	chuanhoa(a.bm);
	return cin;
}
bool check(string a, string b){
	for(int i=0;i<a.size();i++){
		a[i]=toupper(a[i]);
	}
	for(int i=0;i<b.size();i++){
		b[i]=toupper(b[i]);
	}
	return a.find(b)!=string::npos;
}
ostream &operator << (ostream &cout, GiangVien a){
	cout << a.id << " " << a.name << " " << a.bm << endl;
	return cout;
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct GiangVien GV[n];
	for(int i=0;i<n;i++){
		cin >> GV[i];
	}
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
		for(int i=0;i<n;i++){
			if(check(GV[i].name,s)){
				cout << GV[i];
			}
		}
	}
}