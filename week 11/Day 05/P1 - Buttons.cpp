//problem link : https://codeforces.com/contest/1858/problem/A

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
        ll  a, b, c;
        cin >> a >> b >> c;

        if (c % 2 == 0)
        {
            if (a > b)
                cout << "First\n";
            else
                cout << "Second\n";
        }
        else
        {
            if (a + 1 > b)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }
    return 0;
}
