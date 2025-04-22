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
        int x, y; cin >> x >> y;

        cout << (x + 1 >= y && (x - y + 1) % 9 == 0 ? "YES" : "NO") << '\n';
    }

    return 0;
}
