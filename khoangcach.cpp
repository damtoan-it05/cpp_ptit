#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		double x, y, z, x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x=abs(x1-x2);
		y=abs(y1-y2);
		z=sqrt(x*x+y*y);
		cout << fixed << setprecision(4) << z << endl;
	}
}