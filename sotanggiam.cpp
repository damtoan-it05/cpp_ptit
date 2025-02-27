#include<bits/stdc++.h>
using namespace std;
int ngto(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n){
	int x,y,m;
	m=n;
	x=m%10;
	m/=10;
	y=m%10;
	if(x>y){
		while(n){
		    x=n%10;
	    	n/=10;
    		y=n%10;
    		if(x<=y) return 0;
	    }
	}
	else if(x<y){
		while(n>10){
	    	x=n%10;
	    	n/=10;
    		y=n%10;
	    	if(x>=y) return 0;
	    }
	}
	else return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,c=0;
		cin >> n;
		int a=pow(10,n-1), b=pow(10,n);
		for(int i=a;i<b;i++){
			if(check(i)&&ngto(i)){
				c++;
			}
		}
		cout << c << endl;
	}
}