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

        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int neg = 0, negVal = 0, posMin = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                if (neg > 0) {
                    negVal = -1;
                } else {
                    neg++;
                    negVal = b[i] - a[i];
                }
            } else {
                posMin = min(posMin, a[i] - b[i]);
            }
        }

        if (negVal == -1) {
            cout << "NO" << '\n';
        } else {
            cout << (posMin >= negVal ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
