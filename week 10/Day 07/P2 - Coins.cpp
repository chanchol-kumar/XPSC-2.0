//problem link : https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k,c=2;
        cin >> n >> k;
 
        if(n%__gcd(c,k) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
