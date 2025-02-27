#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
	char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
	while(t--){
		int n;
		cin >> n;
		if(n==101){
			float d1 = 0;
			char x;
			for(int i=0; i<15;i++){
				cin >> x;
				if(x==a[i]) d1+=1.0*2/3;
			}
			cout << fixed << setprecision(2) << d1 << endl;
		}
		else{
			float d2 = 0;
			char y;
			for(int i=0; i<15;i++){
				cin >> y;
				if(y==b[i]) d2+=1.0*2/3;
			}
			cout << fixed << setprecision(2) << d2 << endl;
		}
	}
}