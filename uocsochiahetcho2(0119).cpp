#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, c=0;
		cin >> n;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				if(i%2 == 0) c++;
				if((n/i)%2 == 0 && n/i != i) c++;
			}
		}
		cout << c << endl;
	}
}