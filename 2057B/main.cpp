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
        int n, k; cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        vector<int> cnt = {1};
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                cnt.back()++;
            } else {
                cnt.emplace_back(1);
            }
        }
        sort(cnt.begin(), cnt.end());

        int l = 0;
        while (l < cnt.size() - 1) {
            if (cnt[l] > k) break;
            k -= cnt[l++];
        }

        cout << (cnt.size() - l) << '\n';
    }

    return 0;
}
