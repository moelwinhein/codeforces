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

    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            string ans;
            ans.push_back(s.front());
            ans.append(to_string(s.length() - 2));
            ans.push_back(s.back());

            cout << ans << '\n';
        } else {
            cout << s << '\n';
        }
    }

    return 0;
}
