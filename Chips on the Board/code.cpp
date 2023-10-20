#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while(cases)
    {
        cases--;
        int len;
        cin >> len;
        vector<int> a,b;
        for(int i=0;i<len;i++)
        {
            int num;
            cin >> num;
            a.push_back(num);
        }
        for(int j=0;j<len;j++)
        {
            int num;
            cin >> num;
            b.push_back(num);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long sum1=0,sum2=0;
        for(int i=0;i<len;i++)
        {
            sum1+=a[0]+b[i];
            sum2+=b[0]+a[i];
        }
        cout << min(sum1,sum2) << endl;
    }
}
