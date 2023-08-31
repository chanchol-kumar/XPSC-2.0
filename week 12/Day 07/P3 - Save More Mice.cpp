//problem link : https://codeforces.com/problemset/problem/1593/C

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
        int n, q;
        cin >> n >> q;

        vector<int> arr(q);
        for (int i = 0; i < q; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end(), greater<>());

        int cnt = 0;
        ll sum = 0;
        while (cnt < arr.size() && sum + n - arr[cnt] < n)
        {
            sum += n - arr[cnt++];
        }
        cout << cnt << '\n';
    }
    return 0;
}
