#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string id, name, lop, ns;
	    float gpa;
	public:
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};
string chuanhoa(string &s){
	string x="", y=" ";
	x+=s;
	s="";
	int ok=0;
	stringstream ss(x);
	string tmp;
	while(ss >> tmp){
		if(ok) s+=y;
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.size();i++){
			tmp[i]=tolower(tmp[i]);
		}
		s+=tmp;ok=1;
	}
	return s;
}
istream &operator >> (istream &in, SinhVien &a){
	a.id="B20DCCN001";
	getline(in, a.name);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1]=='/') a.ns.insert(0,1,'0');
	if(a.ns[4]=='/') a.ns.insert(3,1,'0');
	chuanhoa(a.name);
	return in;
}
ostream &operator << (ostream &out, SinhVien a){
	out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}