#include <bits/stdc++.h>

using namespace std;

using ll = long long;

bool isPrime(ll x) {
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;

    for (ll i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) {
        int x, k; cin >> x >> k;
        if (k > 1) {
            if (x == 1 && k == 2) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
            continue;
        }
        cout << (isPrime(x) ? "YES" : "NO") << '\n';
    }

    return 0;
}
