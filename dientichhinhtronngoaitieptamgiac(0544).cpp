#include<bits/stdc++.h>
#define PI 3.141592653589793238
using namespace std;
double canh(double a, double b, double c, double d){
	double x=abs(a-c), y=abs(b-d);
	return sqrt(x*x+y*y);
}
int check(double a,double b, double c){
	if(a+b >c && a+c >b && b+c >a) return 0;
	else return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		double x1,y1,x2,y2,x3,y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double a, b, c;
		a=canh(x1,y1,x2,y2);
		b=canh(x1,y1,x3,y3);
		c=canh(x3,y3,x2,y2);
		if(check(a,b,c)){
			cout << "INVALID" << endl;
		}
		else{
			double s, r, dt;
			s=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
			r=a*b*c/(4*s);
			dt=PI*r*r;
			cout << fixed << setprecision(3) << dt << endl;
		}
	}
}