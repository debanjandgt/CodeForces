#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    while(cases -- > 0)
    {
        vector<long long int> vec;
        int size;
        cin >> size;
        for(int i=0;i<size;i++)
        {
            long long int value ;
            cin >> value;
            vec.push_back(value);
        }
        int beg_parity = vec[0]%2 == 0 ? 0:1;
        int max_win = 1 ;
        int ans = 0;
        for(int i = 1 ;i < vec.size();i++)
        {
            if(vec[i]%2 == beg_parity)
                max_win ++;
            else
                {
                    if(max_win != 1){
                    ans += (max_win - 1);
                    max_win = 1;
                    }
                    beg_parity = !beg_parity;
                }
        }
        if(max_win == size)
        cout << size-1 << endl;
        else
        cout << ans+(max_win-1) << endl;
        
    }
}
