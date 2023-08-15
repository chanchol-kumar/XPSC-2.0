/problem link : https://codeforces.com/contest/1591/problem/A

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
 
        int ans = 1;
        if (arr[0] == 1)
            ans++;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == 1)
            {
                if (arr[i - 1] == 1)
                    ans += 5;
                else
                    ans += 1;
            }
            else
            {
                if (arr[i - 1] == 0)
                {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
