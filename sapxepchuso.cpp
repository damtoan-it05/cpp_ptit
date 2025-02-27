#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a, b[10]={0};
		for(int i=0;i<n ;i++){
			cin >> a;
			while(a){
				int tmp =a%10;
				b[tmp]++;
				a/=10;
			}
		}
		for(int i=0;i<10 ;i++){
			if(b[i]) cout << i << " ";
		}
		cout << endl;
	}
}