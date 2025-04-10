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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int rowChange = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                cnt += v[i][j] - '0';
            }
            rowChange += cnt % 2 ? 1 : 0;
        }

        int colChange = 0;
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                cnt += v[i][j] - '0';
            }
            colChange += cnt % 2 ? 1 : 0;
        }

        cout << max(rowChange, colChange) << endl;
    }

    return 0;
}
