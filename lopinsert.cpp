#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("DATA.in","r",stdin);
	int n,m,x;
	cin>>n>>m;
	map <int,int> a1,a2;
	for(int i=0;i<n;i++){
		cin>>x;
		a1[x]++;
	}
	for(int i=0;i<m;i++){
		cin>>x;
		a2[x]++;
	}
	for(auto i:a1){
		if(a2[i.first]>0) cout<<i.first<<" ";
	}
}