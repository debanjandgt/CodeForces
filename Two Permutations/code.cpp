#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin >> cases;
    while(cases -- > 0)
    {
        int n,a,b;
        cin >> n >> a >> b;
        if(n == 1 || (n == a && n == b))
            cout << "Yes" << endl;
        else
            if(n - (a+b) >= 2)
            cout << "Yes" << endl;
            else 
            cout << "No" << endl;
    }
}
