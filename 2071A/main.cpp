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
        int k;
        cin >> k;

        // a b c k=2 (b,c) (a,c) (b,a) (b,c)
        // 1, 4, 7, 10, ...
        // an = a1 + (n - 1) * d = 1 + 3n - 3 = 3n - 2
        // 3n = k + 2
        // n = (k + 2) / 3

        cout << ((k + 2) % 3 ? "NO" : "YES") << '\n';
    }

    return 0;
}
