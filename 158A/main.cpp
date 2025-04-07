#include <bits/stdc++.h>

#include <ranges>

using namespace std;

int main() {
#if fileio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    int i = 0;
    while (n--) {
        cin >> scores[i++];
    }

    int minScore = scores[k - 1];
    int count = 0;
    for (int j = 0; j < scores.size(); j++) {
        if (scores[j] <= 0) continue;
        if (scores[j] >= minScore) count++;
        if (scores[j] < minScore) break;
    }

    cout << count << endl;

    return 0;
}
