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
        int n, x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++) { cin >> v[i]; }
        sort(v.begin(), v.end(), greater<int>());

        int count = 1, ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] * count >= x) { ans++; count = 1; }
            else count++;
        }

        cout << ans << '\n';
    }

    return 0;
}
