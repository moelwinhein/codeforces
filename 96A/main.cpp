#include <bits/stdc++.h>

using namespace std;

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    int count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) count++;
        else count = 1;
        if (count == 7) break;
    }
    cout << (count >= 7 ? "YES" : "NO") << endl;

    return 0;
}
