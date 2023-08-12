//problem link : https://codeforces.com/contest/1582/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll total = a + b * 2 + c * 3;
        cout << total % 2 << endl;
    }
    return 0;
}
