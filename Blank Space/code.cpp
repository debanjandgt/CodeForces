#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int count;
    cin >> count;
    while(count)
    {
        int cnt=0;
        count--;
        int n;
        cin >> n;
        int maxi=INT_MIN;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
            if(a==0)
            {
                cnt++;
                maxi=max(maxi,cnt);
            }
             else if(a == 1)
            cnt=0;
        }
        if(maxi == INT_MIN)
        maxi=0;
        cout << maxi << endl;
    }
    return 0;
}
