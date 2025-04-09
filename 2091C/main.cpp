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

        if (n % 2 == 0) {
            cout << -1 << '\n';
        } else {
            vector<int> v;

            for (int i = 1; i <= n; i+=2) {
                v.push_back(i);
            }

            for (int i = 2; i <= n; i+=2) {
                v.push_back(i);
            }

            for (int i = 0; i < n; i++) {
                cout << v[i];
                if (i < n - 1) {
                    cout << " ";
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
