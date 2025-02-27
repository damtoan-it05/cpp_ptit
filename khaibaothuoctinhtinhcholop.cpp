#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string id, name;
		float hs;
		long lcb, pc;
	public: static long tongluong;
	public:
		void nhap(){
			cin >> id;
			cin.ignore();
			getline(cin,name);
			cin >> hs >> lcb >> pc;
		}
		long TL(){
			tongluong+=lcb*hs+pc;
			return lcb*hs+pc;
		}
		string getid(){
			return id;
		}
};
long NhanVien :: tongluong=0;
int main(){
	int n;
	cin >> n;
	NhanVien nv[n];
	for(int i=0;i<n;i++){
		nv[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout << nv[i].getid() << " " << nv[i].TL() << endl;
	}
	cout << NhanVien::tongluong << endl;
}