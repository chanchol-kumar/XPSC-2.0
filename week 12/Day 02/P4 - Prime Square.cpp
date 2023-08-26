//problem link : https://codeforces.com/problemset/problem/1436/B

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
        int n;
        cin >> n;
        int x = 0, y = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (x == j || y == j)
                    cout << 1 << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl;
            x++, y++;
            if (x == n) x = 0;
            if (y == n) y = 0;
        }
    }
    return 0;
}
