#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<long long>> holderVec(n);

        for (int i = 0; i < n; i++) {
            int sz;
            cin >> sz;
            holderVec[i].resize(sz);
            for (int j = 0; j < sz; j++)
                cin >> holderVec[i][j];
            sort(holderVec[i].begin(), holderVec[i].end());
        }

        long long minSecond = LLONG_MAX;
        int row = -1;

        for (int i = 0; i < n; i++) {
            if (holderVec[i].size() >= 2) {
                if (holderVec[i][1] < minSecond) {
                    minSecond = holderVec[i][1];
                    row = i;
                }
            }
        }


        if (row == -1) {
            cout << 0 << "\n";
            continue;
        }

        vector<long long> trashArray;
        for (int i = 0; i < n; i++)
            trashArray.push_back(holderVec[i][0]);
        sort(trashArray.begin(),trashArray.end());

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (i == row)
                ans += trashArray[0];
            else
                ans += holderVec[i][1];
        }

        cout << ans << "\n";
    }
}
