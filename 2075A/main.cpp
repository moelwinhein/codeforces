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
        int n, k;
        cin >> n >> k;

        if (n <= k) {
            cout << 1 << endl;
            continue;
        }

        int ans = 0;
        if (n & 1) {
            n -= k;
            ans++;
        }
        ans += n/(k - 1);
        if (n % (k - 1)) ans++;

        cout << ans << '\n';
    }

    return 0;
}
