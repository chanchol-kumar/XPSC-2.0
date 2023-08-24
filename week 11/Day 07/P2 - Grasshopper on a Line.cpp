//problem link : https://codeforces.com/contest/1837/problem/A

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
        int x, k;
        cin >> x >> k;
        if (x % k == 0)
        {
            cout << 2 << "\n";
            cout << x - 1 << " " << 1 << "\n";
        }
        else
        {
            cout << 1 << "\n";
            cout << x << "\n";
        }
    }
    return 0;
}
