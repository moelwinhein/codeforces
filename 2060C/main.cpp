#include <bits/stdc++.h>

using namespace std;

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        // Better to use map or k-array
        sort(x.begin(), x.end());

        int l = 0, r = n - 1;
        int ans = 0;
        while (l < r) {
            int sum = x[l] + x[r];
            if (sum == k) {
                ans++;
                l++;
                r--;
            } else if (sum > k) {
                r--;
            } else {
                l++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
