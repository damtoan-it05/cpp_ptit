#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
        int k;
        cin >> s >> k;
        int n=s.size(),ss=0;
        for(int i=0;i<n;i++){
            int a[26]={},l=n,x=0,r=n;
            for(int j=i;j<n;j++){
                if(a[s[j]-'a']==0) x++;
                a[s[j]-'a']++;
                if(x==k){
                    l=j;
                    break;
                }
            }
            for(int j=l+1;j<n;j++){
                if(a[s[j]-'a']==0){
                    r=j;
                    break;
                }
            }
            if(l <= r) ss+=r-l;
       }
	   cout << ss << endl;
	}
}