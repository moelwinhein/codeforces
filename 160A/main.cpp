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
    vector<int> coins(n);
    int halfSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        halfSum += coins[i];
    }
    halfSum /= 2;
    sort(coins.begin(), coins.end(), greater<int>());

    int currSum = 0;
    int count = 0;

    while (currSum <= halfSum) {
        currSum += coins[count++];
    }

    cout << count << endl;
    return 0;
}
