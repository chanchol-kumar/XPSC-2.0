//problem link : https://codeforces.com/problemset/problem/1822/D

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
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }

        if (n % 2)
            cout << -1 << '\n';
        else
        {
            int j = 1;
            for (int i = n; i > 0; i--)
            {
                if (i % 2)
                {
                    cout << j << ' ';
                    j += 2;
                }
                else
                    cout << i << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
