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
        unordered_set<int> a, b;

        int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a.insert(x);
        }

        for (int i = 0; i < n; i++) {
            cin >> x;
            b.insert(x);
        }

        cout << (a.size() + b.size() > 3 ? "YES" : "NO") << '\n';
    }

    return 0;
}
