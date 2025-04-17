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
        ll n;
        cin >> n;

        ll k = n / 15;
        ll ans = k * 3;
        k = k * 15;
        for (int i = 0; i < 3; i++) {
            if (k + i <= n) ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
