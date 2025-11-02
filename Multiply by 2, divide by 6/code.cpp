#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    while(cases -- > 0)
    {
     long long int num;
     cin >> num;
     long long cnt = 0;
     int fl=0;
     while(num > 1)
     {
        if(num%3 != 0)
        {
            cout << -1 << endl;
            fl=1;
            break;
        }
        else{
            if(num%6 == 0)
            {
                num/=6;
                cnt++;
            }
            else
            {
                num*=2;
                cnt++;
            }
        }
     }
     if(fl == 0)
     {
        if(num == 1)
     cout << cnt << endl;
     else
     cout << -1 << endl;  
     }
    }
}
