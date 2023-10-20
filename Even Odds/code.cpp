#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    long long midi=(n%2 == 0) ? (n+0)/2 : (n+1)/2;
    if(k <= midi)
    {
     cout << (k*2)-1 << endl;  
    }
    else
    {
        cout << (k-midi)*2 << endl;
    }
}
