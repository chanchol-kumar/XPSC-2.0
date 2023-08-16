//problem link : https://codeforces.com/problemset/problem/1692/E

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, s;
        cin >> n >> s;
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum == s)
            cout << 0 << "\n";
        else if (sum < s)
            cout << -1 << "\n";
        else
        {
            int cnt = 0;
            int ans = 0;
            int k;
            for (int i = 0; i < n; i++)
            {
                ans += arr[i];
                cnt++;
                if (ans == s)
                {
                    k = i + 1;
                    break;
                }
            }
            int mx = cnt;
            int x = 0;
            for (int i = k; i < n; i++)
            {
                int j = i;
                while (j < n)
                {
                    if (arr[j] == 1)
                    {
                        break;
                    }
                    cnt++;
                    mx = max(mx, cnt);
                    j++;
                }
                i = j;
                ans++;
                while (x < n)
                {
                    if (arr[x] == 1)
                    {
                        x++;
                        break;
                    }
                    cnt--;
                    x++;
                    mx = max(mx, cnt);
                }
            }
            cout << n - mx << endl;
        }
    }
    return 0;
}
