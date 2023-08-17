//problem link : https://codeforces.com/problemset/problem/1713/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mx = 0,idx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
            {
                mx = arr[i];
                idx = i;
            }
        }
        int ans = 0;
        for (int i = idx + 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                ans = 1;
                break;
            }
        }
        for (int i = idx - 1; i >= 0; i--)
        {
            if (arr[i] > arr[i + 1])
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
