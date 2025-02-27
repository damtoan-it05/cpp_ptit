#include <bits/stdc++.h>
using namespace std;

const long long MAX = 10000000;
vector<long long> primes;
void sieve() {
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (long long j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for(long long i=sqrt(MAX)+1;i<MAX;i++){
    	if (isPrime[i]) {
            primes.push_back(i);
        }
	}
}

void phantich(long long n) {
    for (long long p : primes) {
        if (p * p > n) break; 
        long long cnt = 0;
        while (n % p == 0) {
            cnt++;
            n /= p;
        }
        if (cnt > 0) {
            cout << p << " " << cnt <<endl;
        }
    }
    if (n > 1) {
        cout << n << " " << 1 << endl;
    }
}
int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        phantich(n);
    }
    return 0;
}