//problem link : 

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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int l = 0, r = arr[n - 1];
        int mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            int cnt = 1, left = 0;
            for (int i = 1; i < n && cnt < k; i++)
            {
                if (arr[i] - arr[left] >= mid)
                    left = i, cnt++;
            }
            if (cnt >= k)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
