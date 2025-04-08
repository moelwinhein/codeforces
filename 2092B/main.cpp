#include <bits/stdc++.h>

using namespace std;

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
        string a, b;
        cin >> a >> b;

        list<int> ones, zeroes;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1') ones.push_back(i);
            if (b[i] == '0') zeroes.push_back(i);
        }
        bool ans = true;
        if (ones.size() > zeroes.size()) {
            ans = false;
        } else {
            for (auto ait = ones.begin(); ait != ones.end(); ++ait) {
                bool found = false;
                for (auto bit = zeroes.begin(); bit != zeroes.end(); ++bit) {
                    int d = abs(*ait - *bit);
                    if (d % 2) {
                        found = true;
                        zeroes.erase(bit);
                        break;
                    }
                }
                if (!found) {
                    ans = false;
                    break;
                }
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}
