#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin >> t; while(t--)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
#ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    TC{
    	long long int n, k;
    	cin >> n >> k;

    	if( n % k == 0 || n % 2 == 0 ) cout << "YES" << '\n';
    	else{
    		 long long int x = n - k;
    		 if ( x % 2 == 0 ) cout << "YES" << '\n';
    		 else cout << "NO" << '\n';
    	}
    }

    return 0;
}