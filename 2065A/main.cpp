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
        string s; cin >> s;
        s.pop_back();
        s[s.length() - 1] = 'i';

        cout << s << '\n';
    }

    return 0;
}
