#include<bits/stdc++.h>
using namespace std;
int s[1000006];
void sang(){
	for(int i=2;i<=1000006;i++){
	    s[i]=1;
    }
    s[0]=0;s[1]=0;
    for(int i=2;i<=1000;i++){
    	if(s[i]){
    		for(int j=i*i;j<=1000000;j+=i) s[j]=0;
		}
	}
}
int main(){
	sang();
	int t;
	cin >> t;
	while(t--){
		int n,m;
     	cin >> n >> m;
    	if(n > m){
    		int tmp = n;
    		n=m;
     		m=tmp;
    	}
    	for(int i=n;i<=m;i++){
	    	if(s[i]) cout << i << " ";
	    }
	    cout << endl;
	}
}