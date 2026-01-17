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
        vector<long long int> vec;
        for(int i=0;i<n;i++)
        {
            long long int value;
            cin >> value;
            vec.push_back(value);
        }
        map<long long int,long long int> mp;
        for(int i=0;i<n;i++)
        {
            mp[vec[i]-i]++;
        }
        long long ans=0;
        for(auto i:mp)
        {
            if(i.second >= 2)
            {
                ans += ((i.second*(i.second-1))/2);
            }
        }
        cout << ans << endl;
    }
}
