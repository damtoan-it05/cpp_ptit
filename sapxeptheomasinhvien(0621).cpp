#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	public:
		string id, ht, lop, email;
    	friend istream &operator >> (istream &cin, SinhVien &a){
	    	cin >> a.id;
    		cin.ignore();
    		getline(cin, a.ht);
    		cin >> a.lop >> a.email;
    		return cin;
    	}
	    friend ostream &operator << (ostream &cout, SinhVien a){
		    cout << a.id << " " << a.ht << " " << a.lop << " " << a.email << endl;
		    return cout;
	    }
};
bool cmp(SinhVien a, SinhVien b){
	return a.id < b.id;
}
void sapxep(vector<SinhVien> &v, int n){
	sort(v.begin(),v.end(), cmp);
}
int main(){
	SinhVien a;
	vector <SinhVien> v;
	while(cin >> a){
		v.push_back(a);
	}
	int n=v.size();
	sapxep(v, n);
	for(auto x:v){
    	cout << x;
   	}
	return 0;
}