#include <bits/stdc++.h>

using namespace std;

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int ans = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2) ans++;
    }
    cout << ans << endl;

    return 0;
}
