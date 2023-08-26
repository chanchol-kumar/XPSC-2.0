//problem link : https://codeforces.com/contest/1862/problem/C

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
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        if (arr[0] != n)
            cout << "NO" << endl;
        else
        {
            vector<int> cnt(n, 0);
            cnt[0] = n;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] < n)
                    cnt[arr[j]]--;
            }
            for (int j = 1; j < n; j++)
                cnt[j] += cnt[j - 1];
            if (arr == cnt)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
        return 0;
    }
