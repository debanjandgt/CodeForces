#include <bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    while (cases-- > 0) {
        int s;
        cin >> s;
        vector<char> vec(s);
        for (int i = 0; i < s; i++)
           cin >> vec[i];
        int window = 0;
        int ans = 0;
        int k = 0;
         //cout << "case " << cases << endl;
        for (int i = 0; i < s; i++) {
           
            if (vec[i] == '#') {
                if(window == 3)
                {
                    cout << 2   << endl;
                    k=1;
                    break;
                }
                else
               {
                 ans += window ;
                 window = 0;
               }
            } else {
                window++;
                if(window == 3)
                {
                   cout << 2   << endl;
                    k=1;
                    break; 
                }
            }
        }
        if(k == 0){
            if (window  == 3)
            cout << 2 << endl;
            else 
            cout << ans+window << endl;
        }
    }
}
