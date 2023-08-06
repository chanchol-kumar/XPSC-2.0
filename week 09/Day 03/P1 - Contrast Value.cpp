//problem link : https://codeforces.com/problemset/problem/1832/C

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
        int n;
        cin >> n;
        vector<int> arr(n);

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
                sum += abs(arr[i - 1] - arr[i]);
        }
        if (sum == 0)
            cout << 1 << '\n';
        else
        {
            int ans = 2;
            n = unique(arr.begin(), arr.end()) - arr.begin();

            for (int i = 1; i < n - 1; i++)
            {
                if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) || (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
                    ans++;
            }
            cout << ans << endl;
        }
    }
    return 0;
}
 
