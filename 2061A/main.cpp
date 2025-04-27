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
        int oddCount = 0, evenCount = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            if (x & 1) oddCount++;
            else evenCount++;
        }

        int ans;
        if (evenCount == 0) {
            ans = oddCount - 1;
        } else {
            ans = oddCount + 1;
        }
        cout << ans << '\n';
    }

    return 0;
}
