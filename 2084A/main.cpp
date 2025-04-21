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

        if (n & 1) {
            cout << n;
            for (int i = 1; i < n - 1; i++) {
                cout << " " << i;
            }
            cout << " " << n - 1 << '\n';
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
