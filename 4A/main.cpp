#include <bits/stdc++.h>

using namespace std;

#define fileio 0

int main() {
    #if fileio
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int w;
    cin >> w;

    string ans = (w > 2 && w % 2 == 0) ? "YES" : "NO";
    cout << ans << endl;

    return 0;
}