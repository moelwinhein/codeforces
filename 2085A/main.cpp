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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        unordered_set<char> d;
        for (auto& c: s) d.insert(c);

        if (d.size() == 1) {
            cout << "NO" << '\n';
            continue;
        }

        int flag = 0;
        for (int i = 0; i < s.length() / 2; i++) {
            if (s[i] > s[s.length() - 1 - i]) {
                flag = 1;
                break;
            } else if (s[i] < s[s.length() - 1 - i]) {
                flag = -1;
                break;
            }
        }

        if (k == 0) {
            if (flag == -1) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
            continue;
        }

        cout << "YES" << '\n';
    }

    return 0;
}
