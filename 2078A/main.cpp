#include <bits/stdc++.h>

using namespace std;
using ll=long long;

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll sum = accumulate(v.begin(), v.end(), 0LL);
        if (sum / n == x && sum % n == 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
