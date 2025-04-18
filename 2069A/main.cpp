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

        int p2 = 2, p1 = 2, curr, ans = 1;
        for (int i = 0; i < n - 2; i++) {
            cin >> curr;
            if (!ans) continue;
            if (p2 == 1 && p1 == 0 && curr == 1) {
                ans = 0;
            }
            p2 = p1;
            p1 = curr;
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}
