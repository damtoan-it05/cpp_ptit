#include<bits/stdc++.h>
using namespace std;
int x=0;
struct GiangVien{
	string id, ht, name, bm;
	void nhap(){
		if(x<9){
			id="GV0"+to_string(++x);
		}
		else if(x<99) id="GV"+to_string(++x);
		getline(cin,ht);
		stringstream zz(ht);
		string x;
		vector<string> v;
		while(zz >> x){
			v.push_back(x);
		}
		name=v[v.size()-1];
		getline(cin,bm);
		stringstream ss(bm);
		string tmp;
		string res="";
		while(ss >> tmp){
			tmp[0]=toupper(tmp[0]);
			res+=tmp[0];
		}
		bm=res;
	}
	void in(){
		cout << id << " " << ht << " " << bm << endl;
	}
};
bool cmp(GiangVien a, GiangVien b){
	if(a.name!=b.name)
	return a.name < b.name;
	else return a.id <b.id;
}
void sapxep(GiangVien a[], int n){
	sort(a, a+n, cmp);
}
int main(){
	int n;
	cin >> n;
	cin.ignore();
	struct GiangVien GV[n];
	for(int i=0;i<n;i++){
		GV[i].nhap();
	}
	sapxep(GV, n);
	for(int i=0;i<n;i++){
		GV[i].in();
	}
	return 0;
}