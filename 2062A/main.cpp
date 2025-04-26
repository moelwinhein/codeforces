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
        string s; cin >> s;

        int cnt = 0;
        for (auto& c: s) {
            if (c == '1') cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
