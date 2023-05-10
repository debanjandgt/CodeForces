#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int t=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>> a;
        v.push_back(a);
    }
    for(int i=0;i<pow(2,n);i++)
    {
        int s=0;
        t=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            s=s+v[j];
            else
            s=s-v[j];
        }
        if(s%360 == 0) {
        cout << "YES" << endl;
        t=1;
        break;
        }
    }
    if(t==0)
        cout << "NO" << endl;
}
