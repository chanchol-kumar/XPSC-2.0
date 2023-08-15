//problem link : https://codeforces.com/contest/1591/problem/B

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
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        ll mx = 0, cnt = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
                cnt++;
            }
        }
        cout << cnt - 1 << endl;
    }
    return 0;
}
