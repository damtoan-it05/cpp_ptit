#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int a, b, x=0;
		cin >> a >> b;
		for(int i=1;i<=a;i++){
			if(i%b==0){
				int tmp=i;
				while(tmp%b==0){
					x++;
					tmp/=b;
				}
			}
		}
		cout << x << endl;
	}
}