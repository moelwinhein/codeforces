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

        vector<string> mat(n);
        for (int i = 0; i < n; i++) {
            cin >> mat[i];
        }

        for (int i = 0; i < n; i++) {
            if (mat[i][0] == '0') continue;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == '1') mat[i][j] = '#';
                else if (mat[i][j] == '0') break;
            }
        }

        for (int j = 0; j < m; j++) {
            if (mat[0][j] == '0') continue;
            for (int i = 0; i < n; i++) {
                if (mat[i][j] == '1') mat[i][j] = '#';
                else if (mat[i][j] == '0') break;
            }
        }

        bool ans = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == '1') {
                    ans = false;
                    break;
                }
            }
            if (!ans) break;
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}
