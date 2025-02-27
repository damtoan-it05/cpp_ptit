#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[0]=='0'){
			s.erase(0, 1);
		}
		int x=s.size(), ok=0;
		for(int i=x-1;i>0;i--){
			if(s[i] < s[i-1]){
				int tmp = i;
				for(int j=i;j<x;j++){
	            	if(s[j] < s[i-1] && s[j] > s[tmp]){
	        		    tmp=j;	
	        		}
	        	}
	        	swap(s[i-1],s[tmp]);
		        ok=1;
			   	break;
			}
		}
		if(ok) cout << s;
		else cout << "-1";
		cout << endl;
	}
}