#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int m, n;
        string s;
        cin >> m >> n >> s;
        long long a[m][n];
        for(int i=0;i<m;i++){
        	a[i]=0;
		}
        a[0][(s[0] - '0') % n]++;
        for (int i = 1; i < m; i++){
            a[i][(s[i] - '0') % n]++;
            for (int j = 0; j < n; j++){
                a[i][j] += a[i - 1][j];
                a[i][(j * 10 + (s[i] - '0')) % n] += a[i - 1][j];
            }
        }
        cout << a[m - 1][0] << endl;
    }
}