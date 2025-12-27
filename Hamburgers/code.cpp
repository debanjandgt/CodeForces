#include <bits/stdc++.h>
using namespace std;

int main() {
    string menu;
    cin >> menu;

    long long fB = 0, fS = 0, fC = 0;
    for (char c : menu) {
        if (c == 'B') fB++;
        else if (c == 'S') fS++;
        else if (c == 'C') fC++;
    }

    long long hB, hS, hC;
    cin >> hB >> hS >> hC;

    long long pB, pS, pC;
    cin >> pB >> pS >> pC;

    long long rubb;
    cin >> rubb;

    long long low = 0, high = 1e13, ans = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;

        long long needB = max(0LL, mid * fB - hB);
        long long needS = max(0LL, mid * fS - hS);
        long long needC = max(0LL, mid * fC - hC);

        long long cost =
            needB * pB +
            needS * pS +
            needC * pC;

        if (cost <= rubb) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}
