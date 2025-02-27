#include<bits/stdc++.h>
using namespace std;
int n, a[1005], ok;
void pre(){
	int i=n-1;
	while(i>=1 && a[i]<a[i+1]){
		--i;
	}
	if(i==0){
		for(int i=1;i<=n;i++){
			cout << i << " ";
		}
	}
	else{
		int j=n;
		while(a[i]<a[j]){
			j--;
		}
		swap(a[i], a[j]);
		reverse(a+i+1,a+n+1);
		for(int i=1;i<=n;i++){
			cout << a[i] << " ";
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
    	for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		pre();
		cout << endl;
	}
}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		int a[n];
//    	for(int i=0;i<n;i++){
//			cin >> a[i];
//		}
//		prev_permutation(a,a+n);
//		for(int i=0;i<n;i++){
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//}