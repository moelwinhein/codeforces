#include <bits/stdc++.h>

using namespace std;

int main() {
#if fileio
    ifstream cin("input.txt");
    ofstream cout("output.txt");
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    while (k--) {
        int n, ai;
        cin >> n;

        int minVal = INT_MAX;
        int maxVal = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> ai;
            minVal = min(minVal, ai);
            maxVal = max(maxVal, ai);
        }

        // solve
        cout << maxVal - minVal << endl;
    }

    return 0;
}