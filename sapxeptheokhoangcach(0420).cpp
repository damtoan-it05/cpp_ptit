#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int x;
bool cmp(int a, int b){
	return abs(a-x)<abs(b-x);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n >> x;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		stable_sort(a,a+n,cmp);
		for(int i=0;i<n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}