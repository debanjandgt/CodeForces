#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int n = s1.size(), m = s2.size();
        int best = 0;

        for (int len = min(n, m); len >= 1; len--) {
            bool found = false;
            for (int i = 0; i + len <= n; i++) {
                string sub = s1.substr(i, len);
                if (s2.find(sub) != string::npos) {
                    best = len;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        cout << (n + m - 2 * best) << "\n";
    }
}
