//problem link : https://codeforces.com/problemset/problem/1853/B

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
        int n, k;
        cin >> n >> k;

        if (k > 30)
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            int second = n;
            int first = i;
            bool flag = true;
            for (int j = 1; j <= k - 2; j++)
            {
                int temp = second - first;
                second = first;
                first = temp;
                if (first <= second && first > -1)
                    continue;
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
