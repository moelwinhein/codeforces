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
        int n;
        cin >> n;
        string s;
        cin >> s;

        ll ans = 0;
        if (n < 3) {
            cout << ans << '\n';
            continue;
        }

        ll cnt1 = 0, cnt2 = 0;
        for (auto& c: s) {
            if (c == '-') cnt1++;
            else if (c == '_') cnt2++;
        }

        if (cnt1 < 2 || cnt2 < 1) {
            cout << ans << '\n';
            continue;
        }

        ll h = cnt1 / 2;
        if (cnt1 & 1) {
            ans = cnt2 * h * (h + 1);
        } else {
            ans = cnt2 * h * h;
        }

        cout << ans << '\n';
    }

    return 0;
}
