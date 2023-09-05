// problem link : https://codeforces.com/contest/1864/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 3000 + 5;
int n;
vector<string> s;
int d1[N][N];
int d2[N][N];
int cur[N][N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s.clear();
        s.resize(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                d1[i][j] = 0;
                d2[i][j] = 0;
                cur[i][j] = 0;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cur[i][j] = d1[i][j] + d2[i][j] + (j - 1 >= 0 ? cur[i][j - 1] : 0);
            }
            for (int j = 0; j < n; j++)
            {
                char eta = s[i][j];
                if (cur[i][j] % 2)
                {
                    eta = ((eta - '0') ^ 1) + '0';
                }
                if (eta == '1')
                {
                    ans++;
                    d1[i][j]++;
                    if (j + 1 < n)
                        d2[i][j + 1]--;
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (i + 1 >= n)
                    break;
                if (j - 1 >= 0)
                    d1[i + 1][j - 1] += d1[i][j];
                else
                    d1[i + 1][j] += d1[i][j];

                if (j + 1 < n)
                    d2[i + 1][j + 1] += d2[i][j];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
