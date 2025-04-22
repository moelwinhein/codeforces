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
    cin.ignore();
    while (tc--) {
        string s;
        getline(cin, s);

        bool reset = true;
        string ans;
        for (auto& c: s) {
            if (c == ' ') {
                reset = true;
                continue;
            }
            if (reset) {
                ans += c;
                reset = false;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
