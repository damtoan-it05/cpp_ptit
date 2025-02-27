#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string name, birth;
	float x,y,z;
};
void nhap(struct ThiSinh &a){
	getline(cin , a.name);
	cin >> a.birth;
	cin >> a.x >> a.y >> a.z;
}
void in(struct ThiSinh &a){
	cout << a.name << " " << a.birth << " " << fixed << setprecision(1) << a.x+a.y+a.z;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}