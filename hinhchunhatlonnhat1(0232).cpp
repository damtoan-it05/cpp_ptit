#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin >> a[i][j];
			}
		}
		int b[100][100]={0};
		for(int j=0;j<m;j++){
			b[0][j]=a[0][j];
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==0) b[i][j]=0;
				else{
					b[i][j]=b[i-1][j]+1;
				}
			}
		}
		for(int i=0;i<n;i++){
			sort(b[i],b[i]+m);
		}
		int s=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				s=max(s, b[i][j]*(m-j));
			}
		}
		cout << s << endl;
	}
}