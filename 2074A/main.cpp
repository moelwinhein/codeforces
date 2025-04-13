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
        unordered_set<int> s;
        int v;
        for (int i = 0; i < 4; i++) {
            cin >> v;
            s.insert(v);
        }

        cout << (s.size() == 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}
