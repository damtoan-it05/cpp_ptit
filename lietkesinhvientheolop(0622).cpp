#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id, ht, lop, email;
   	void nhap(){
    	cin >> id;
   		cin.ignore();
   		getline(cin, ht);
   		cin >> lop >> email;
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
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for(int i=0;i<n;i++){
		    if(SV[i].lop==s){
		    	SV[i].in();
	    	}
    	}
	}
	return 0;
}