#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				d++;
				while(a[i]==a[i+1]){
					d++;
					i++;
				}
			}
		}
		cout << d << endl;
	}
}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n, d=0;
//		cin >> n;
//		int a[n];
//		vector<int> b(1000006,0);
//		for(int i=0;i<n;i++){
//			cin >> a[i];
//			b[a[i]]++;
//		}
//		for(int i=0;i<n;i++){
//			if(b[a[i]]>1){
//				d+=b[a[i]];
//				b[a[i]]=0;
//			}
//		}
//		cout << d << endl;
//	}
//}