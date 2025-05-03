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
        int n, m; cin >> n >> m;

        int x, y, px, py;
        cin >> px >> py;

        long long sum = 4 * m;
        for (int i = 1; i < n; i++) {
            cin >> x >> y;

            int nx = px + x;
            int ny = py + y;

            int dx = px + m - nx;
            int dy = py + m - ny;

            sum -= 2 * dx + 2 * dy;
            sum += 4 * m;

            px = nx; py = ny;
        }

        cout << sum << '\n';
    }

    return 0;
}
