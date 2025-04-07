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

    int x = 0;
    while (n--) {
        string s;
        cin >> s;

        if (s == "++X" || s == "X++") x++;
        else if (s == "--X" || s == "X--") x--;
    }
    cout << x << endl;

    return 0;
}
