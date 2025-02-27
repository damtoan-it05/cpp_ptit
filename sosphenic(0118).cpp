#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int s=0,ok=1;
		for(int i=2;i<=sqrt(n);i++){
	    	int tmp=0;
	   		while(n%i==0){
	   			tmp++;
	  			n/=i;
	   	    }
	   		if(tmp==1){
	   			s++;
			   }
	   		else if(tmp>1){
	   			cout << "0";
	   			ok=0;
	   			break;
	    	}
    	}
    	if(n) s++;
		if(ok){
			if(s==3) cout << "1";
			else cout << "0";
		}
		cout << endl;
	}
}