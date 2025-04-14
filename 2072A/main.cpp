#include <bits/stdc++.h>

using namespace std;

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
        int n, k, p;
        cin >> n >> k >> p;

        if (k < 0) k *= -1;
        int ans = k / p;
        if (k % p) ans++;

        if (ans > n) ans = -1;

        cout << ans << '\n';
    }

    return 0;
}
