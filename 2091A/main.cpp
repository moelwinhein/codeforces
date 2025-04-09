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
        int n;
        cin >> n;

        unordered_map<int, int> counter = {
            {0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}
        };
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;

            if (ans) continue;

            if (counter.count(k)) counter[k]--;
            if (counter[k] <= 0) counter.erase(k);
            if (counter.empty()) ans = i + 1;
        }

        cout << ans << '\n';
    }

    return 0;
}
