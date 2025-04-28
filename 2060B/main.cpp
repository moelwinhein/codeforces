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
        int n, m; cin >> n >> m;

        vector<vector<int>> vvi(n, vector<int>(m + 1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> vvi[i][j];
            }
            vvi[i][m] = INT_MAX;
            sort(vvi[i].begin(), vvi[i].end());
            vvi[i][m] = i + 1;
        }

        sort(vvi.begin(), vvi.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });

        int prev = -1;
        bool ok = true;
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (vvi[i][j] <= prev) {
                    ok = false;
                    break;
                }
                prev = vvi[i][j];
            }
            if (!ok) break;
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n - 1; i++) {
                cout << vvi[i][m] << ' ';
            }
            cout << vvi[n - 1][m] << '\n';
        }
    }

    return 0;
}
