//problem link : https://codeforces.com/problemset/problem/1415/B

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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mn = INT_MAX;
        for (int i = 0;i<101; i++)
        {
            int cnt = 0;
            int j = 0;
            while (j < n)
            {
                while (arr[j] == i && j < n)
                    j++;
                if (j >= n)
                    break;
                j += k;
                cnt++;
            }
            mn = min(mn, cnt);
        }
        cout << mn << endl;
    }
    return 0;
}
