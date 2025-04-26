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
        int n; cin >> n;
        int a;

        bool ans = true;
        for (int i = 1; i <= n; i++) {
            cin >> a;
            if (ans && a <= max(i - 1, n - i) * 2) {
                ans = false;
            }
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}
