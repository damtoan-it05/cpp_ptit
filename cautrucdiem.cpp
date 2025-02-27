#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x, y;
};
void input(struct Point &a){
	cin >> a.x >> a.y;
}
double distance(struct Point &a,struct Point &b){
	double x=abs(a.x-b.x),y=abs(a.y-b.y);
	return sqrt(x*x+y*y);
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}