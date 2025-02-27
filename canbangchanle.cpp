#include<bits/stdc++.h>
using namespace std;
int check(int n){
	int c=0,l=0;
	while(n){
		int tmp=n%10;
		if(tmp%2==0) c++;
		else l++;
		n/=10;
	}
	if(c==l) return 1;
	return 0;
}
int main(){
	int n, m, a, b, c=0;
	cin >> n;
	a=pow(10,n-1);b=pow(10,n);
	for(int i=a;i<b;i++){
		if(check (i)){
			cout << i;
			c++;
			if(c<10) cout <<" ";
		}
		if(c==10){
			cout << endl;
			c=0;
		}
	}
}