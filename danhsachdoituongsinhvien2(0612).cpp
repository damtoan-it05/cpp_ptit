#include<bits/stdc++.h>
using namespace std;
int x=0;
class SinhVien{
	private:
		string id, name, lop, ns;
		float gpa;
	public:
		friend istream &operator >> (istream &cin, SinhVien &a);
		friend ostream &operator << (ostream &cout, SinhVien a);
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
istream &operator >> (istream &cin, SinhVien &a){
	if(x<9){
		a.id="B20DCCN00"+to_string(x+1);
		x++;
	}
	else if(x<99){
		a.id="B20DCCN0"+to_string(x+1);
		x++;
	}
	cin.ignore();
	getline(cin,a.name);
	cin >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1]=='/') a.ns.insert(0,"0");
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	chuanhoa(a.name);
	return cin;
}
ostream &operator << (ostream &cout, SinhVien a){
	cout << a.id << " " << a.name << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return cout;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}