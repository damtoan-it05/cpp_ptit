#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id, ht, lop, email, khoa;
   	void nhap(){
    	cin >> id;
   		cin.ignore();
   		getline(cin, ht);
   		cin >> lop >> email;
   		khoa="20";
   		khoa+=lop[1];
   		khoa+=lop[2];
   	}
    void in(){
	    cout << id << " " << ht << " " << lop << " " << email << endl;
	}	
};
int main(){
	int n;
	cin >> n;
	struct SinhVien SV[1005];
	for(int i=0;i<n;i++){
		SV[i].nhap();
	}
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
		for(int i=0;i<n;i++){
		    if(SV[i].khoa==s){
		    	SV[i].in();
	    	}
    	}
	}
	return 0;
}