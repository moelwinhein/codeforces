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
        int n, m, l, r; cin >> n >> m >> l >> r;
        if (n != m) {
            l += (n - m);
            if (l > 0) {
                r -= l;
                l = 0;
            }
        }

        cout << l << ' ' << r << '\n';
    }

    return 0;
}
