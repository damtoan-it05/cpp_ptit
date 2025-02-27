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
void chuanhoa(string &s){
	for(int i=0;i<s.size();i++){
		s[i]=toupper(s[i]);
	}
}
int main(){
	int n;
	cin >> n;
	struct SinhVien SV[n];
	for(int i=0;i<n;i++){
		SV[i].nhap();
	}
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		chuanhoa(s);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
		for(int i=0;i<n;i++){
		    if(SV[i].id[5]==s[0]){
		    	if((s[0]=='C' || s[0]=='A')&& SV[i].lop[0]=='E'){
		    		continue;
				}
			    SV[i].in();
	    	}
    	}
	}
	return 0;
}