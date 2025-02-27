#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int a[t], b[1005]={0};
	for(int i=0;i<t;i++){
		cin >> a[i];
		b[a[i]]++;
	}
	for(int i=0;i<1005;i++){
		if(b[i]) cout << i << " ";
	}
}