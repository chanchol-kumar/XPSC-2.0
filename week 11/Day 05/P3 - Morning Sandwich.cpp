//problem link : https://codeforces.com/contest/1849/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        if (c + h >= b)
            cout << (2 * b) - 1 << endl;
        else
            cout << (2 * (h + c)) + 1 << endl;
    }
    return 0;
}
