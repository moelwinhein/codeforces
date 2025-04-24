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
        string s; cin >> s;

        char c = '#';
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) continue;
            ++cnt;
            c = s[i];
        }
        if (c == '0') --cnt;
        cout << cnt << '\n';
    }

    return 0;
}
