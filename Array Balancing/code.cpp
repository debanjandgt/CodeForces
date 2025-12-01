#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while(cases-- > 0)
    {
        long long s;
        cin >> s;
        vector<long long> a,b;
        for(long long i=0;i<s;i++)
        {
            long long val;
            cin >> val;
            a.push_back(val);
        }
        for(long long i=0;i<s;i++)
        {
            long long val;
            cin >> val;
            b.push_back(val);
        }
        for(long long i=0;i<s-1;i++)
        {
            if((abs(a[i]-a[i+1]) + abs(b[i]-b[i+1])) > (abs(a[i]-b[i+1]) + abs(b[i]-a[i+1])))
            swap(a[i+1],b[i+1]);
        }
        long long sum = 0;
        for(long long i=0;i<s-1;i++)
        {
            sum += abs(a[i]-a[i+1]) + abs(b[i]-b[i+1]);
        }
        cout << sum << endl;
    }
}
