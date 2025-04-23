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

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = i + 1;
        }

        int l = 0, r = n - 1;
        vector<int> ans(n);
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '>') {
                ans[i + 1] = v[r--];
            } else {
                ans[i + 1] = v[l++];
            }
        }
        ans[0] = v[l];

        for (int i = 0; i < n - 1; i++) {
            cout << ans[i] << ' ';
        }
        cout << ans[n -1] << '\n';
    }

    return 0;
}
