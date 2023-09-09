// problem link : https://codeforces.com/contest/1872/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << "-1\n";
            continue;
        }
        else if (l != r || !(r & 1))
        {
            cout << r / 2 << " " << r / 2 << "\n";
        }
        else
        {
            bool flag = true;
            for (int i = 2; i * i <= r; i++)
            {
                if (r % i == 0)
                {
                    cout << i << " " << r - i << "\n";
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "-1\n";
        }
    }
    return 0;
}
