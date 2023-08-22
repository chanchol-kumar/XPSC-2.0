//problem link : https://codeforces.com/contest/1858/problem/C

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
        vector<int> arr(n);
        int cur = 0;
        for (int i = 1; i <= n; i += 2)
        {
            for (int j = i; j <= n; j *= 2)
                arr[cur++] = j;
        }
        for (int i = 0; i < n; ++i)
            cout << arr[i] << " ";
        cout << '\n';
    }
    return 0;
}
