#include <bits/stdc++.h>

#define int long long
#define sz(v) (int)v.size()
using namespace std;

const int maxn = (int)2e5 + 5;
const int INF = (int)1e18 + 5;

void Linear_Sieve(int m) {
    vector<int> primes;
    vector<int> lpf(m + 1, 0);

    for (int i = 2; i <= m; i++) {
        cout << "i = " << i << "\tdel: ";
        // i is a prime number
        if (lpf[i] == 0) { 
            primes.push_back(i);
            lpf[i] = i;
        }

        for (int p : primes) {
            if (i * p > m) break;
            lpf[i * p] = p;
            cout << i * p << ' ';
            if (i % p == 0) break;
        }
        cout << '\n';
    }
}

void solve() {
    Linear_Sieve(30);
}

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    solve();

    return 0;
}