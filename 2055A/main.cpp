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
        int n, a, b; cin >> n >> a >> b;

        if (a & 1) {
            cout << (b & 1 ? "YES" : "NO") << '\n';
        } else {
            cout << ((b & 1) == 0 ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}
