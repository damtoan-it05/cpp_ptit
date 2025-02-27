#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		int x=n.size(), a=0;
		while(a<x){
			if(n[a]=='0' && n[a+1]=='8' && n[a+2]=='4'){
				a+=3;
			}	
			else{
				cout << n[a];
			    a++;
			}
		}
		cout << endl;
	}
}