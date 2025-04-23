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

    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;

        vector<ll> v;
        v.push_back(0);
        ll g;
        ll nSum = (2 * n * n) + n;
        ll sum = 0;
        for (int r = 0; r < n; r++) {
            for (int c = 0; c < n; c++) {
                cin >> g;
                if (r == 0 || c == (n - 1)) {
                    v.push_back(g);
                    sum += g;
                }
            }
        }
        v[0] = nSum - sum;

        for (int i = 0; i < 2 * n - 1; i++) {
            cout << v[i] << ' ';
        }
        cout << v[2 * n - 1] << '\n';
    }

    return 0;
}
