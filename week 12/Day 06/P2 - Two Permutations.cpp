// problem link : https://codeforces.com/contest/1761/problem/A

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
        int a, b, n;
        cin >> n >> a >> b;

        if ((a == b && b == n) || (a + b <= n - 2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
