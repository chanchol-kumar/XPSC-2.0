//problem link : https://codeforces.com/contest/1604/problem/B

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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;
        if (n % 2 == 0)
            cout << "YES\n";
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (arr[i] <= arr[i - 1])
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
