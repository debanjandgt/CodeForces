#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int n;
	cin >> n;
	while(n-- > 0)
	{
	    long long maxi = 0;
	    long long s;
	    cin >> s;
	    int fl= 0;
	    vector<long long> vec;
	    for(long long i =0; i<s;i++)
	    {
	        long long val;
	        cin >> val;
	        vec.push_back(val);
	    }
	    if(s == 1)
	    {
	        if(vec[0] > 1)
	        cout << "NO \n";
	        else
	        cout << "YES \n";
	    }
	    else
	    {
	        sort(vec.begin(),vec.end());
	    long long v1=vec[s-1];
	    long long v2=vec[s-2];
	    if(v1 - v2 <= 1)
	    cout << "YES" << endl ;
	    else
	    cout << "NO" << endl;
	    }
	    
	}
 
}
