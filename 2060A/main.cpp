#include <bits/stdc++.h>

using namespace std;

int count(int& a1, int& a2, int& a3, int& a4, int& a5) {
    int cnt = 0;
    if (a1 + a2 == a3) cnt++;
    if (a2 + a3 == a4) cnt++;
    if (a3 + a4 == a5) cnt++;

    return cnt;
}

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; cin >> tc;
    while (tc--) {
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int maxCnt = 0;
        a3 = a1 + a2;
        maxCnt = max(maxCnt, count(a1, a2, a3, a4, a5));

        a3 = a4 - a2;
        maxCnt = max(maxCnt, count(a1, a2, a3, a4, a5));

        a3 = a5 - a4;
        maxCnt = max(maxCnt, count(a1, a2, a3, a4, a5));

        cout << maxCnt << '\n';
    }

    return 0;
}
