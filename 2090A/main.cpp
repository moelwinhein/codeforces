#include <bits/stdc++.h>

using namespace std;

using ll = long long;

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
        int b, k, a;
        cin >> b >> k >> a;

        if (b > a) {
            cout << "NO" << '\n';
        } else if (b + k > a) {
            cout << "YES" << '\n';
        } else {
            ll p = static_cast<ll>(ceil((1.0 * a)/(b + k)));
            ll i = static_cast<ll>(pow(2, p));
            ll val = (b + k) * p;
            while (i) {
                if (val <= a) {
                    ++i;
                    break;
                }
                --i;
                val = i % 2 ? val - k : val - b;
            }
            cout << (i % 2 ? "NO" : "YES") << '\n';
        }
    }

    return 0;
}
