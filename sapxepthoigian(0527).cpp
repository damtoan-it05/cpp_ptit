#include<bits/stdc++.h>
using namespace std;
struct ThoiGian{
	int h,m,s;
};
void nhap(ThoiGian a[], int n){
	for(int i=0;i<n;i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
	}
}
bool cmp(ThoiGian a, ThoiGian b){
	if(a.h!=b.h) return a.h<b.h;
	else{
		if(a.m!=b.m) return a.m<b.m;
		else{
			return a.s<b.s;
		}
	}
}
void sapxep(ThoiGian a[], int n){
	sort(a, a+n, cmp);
}
void in(ThoiGian a[], int n){
	for(int i=0;i<n;i++){
		cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
	}
}
int main(){
	struct ThoiGian tg[5005];
	int n;
	cin >> n;
	nhap(tg,n);
	sapxep(tg,n);
	in(tg,n);
	return 0;
}