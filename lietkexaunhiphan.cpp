#include<bits/stdc++.h>
using namespace std;
int ok=1;
void ktao(int a[], int n){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void sinh(int a[], int n){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=0;
	}
	else{
		a[i]=1;
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100];
		ktao(a ,n);
		while(ok){
			for(int i=1;i<=n;i++){
				cout << a[i];
			}
			cout << " ";
			sinh(a, n);
		}
		ok=1;
		cout << endl;
	}
}