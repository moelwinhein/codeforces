#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define scanv(a) for(auto& i: a) cin >> i

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
        int n, m;
        cin >> n >> m;
        vector<ll> x(n), r(n);
        scanv(x);
        scanv(r);

        map<ll, ll> maxPoints;

        for (int i = 0; i < n; i++) {
            ll xx = x[i], rr = r[i];
            for (ll j = xx - rr; j <= xx + rr; j++) {
                ll t = rr * rr - (j - xx) * (j - xx);
                ll a = static_cast<long long>(sqrtl(t));
                maxPoints[j] = max(maxPoints[j], 2 * a + 1);
            }
        }

        ll ans = 0;
        for (auto& [k, v]: maxPoints) {
            ans += v;
        }
        cout << ans << '\n';
    }

    return 0;
}
