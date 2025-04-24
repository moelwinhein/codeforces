#include <bits/stdc++.h>

using namespace std;

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) {
        int l, r; cin >> l >> r;

        int ans;
        if (l == 1 && r == 1) ans = 1;
        else ans = r - l;

        cout << ans << '\n';
    }

    return 0;
}
