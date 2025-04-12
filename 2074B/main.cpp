#include <bits/stdc++.h>

using namespace std;

using ll = long long;

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
        int n;
        cin >> n;

        ll sum = 0;
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            sum += a;
        }
        sum -= n - 1;

        cout << sum << '\n';
    }

    return 0;
}
