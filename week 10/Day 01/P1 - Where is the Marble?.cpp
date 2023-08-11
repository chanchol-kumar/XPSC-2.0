//problem link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415&fbclid=IwAR1AvrmyvzCf-NszbOsz3oAAVcv84Q7gxbY18sasMFrvTrwKFd7DCyiNsHU

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n, q, c = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)break;
        cout << "CASE# " << c << ":" << endl;
        c++;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());

        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(arr.begin(), arr.end(), x);

            int idx = it - arr.begin();
            int ans;

            if (idx == n || arr[idx] != x)
                ans = -1;
            else
                ans = idx + 1;
            if (ans == -1)
                cout << x << " not found\n";
            else
                cout << x << " found at " << ans << endl;
        }
    }
    return 0;
}


