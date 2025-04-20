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
        string n; cin >> n;
        int i = n.length() - 1;
        int cnt = 0;
        while (i >= 0 && n[i] == '0') {
            cnt++;
            i--;
        }
        while (i >= 0) {
            if (n[i] != '0') cnt++;
            i--;
        }

        cout << (cnt - 1) << '\n';
    }

    return 0;
}
