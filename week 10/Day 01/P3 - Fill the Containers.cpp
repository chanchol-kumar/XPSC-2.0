//problem link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408&fbclid=IwAR02obU23CMTuMGRzOk39uLr8jyOLLiNYj6-aSgXTmro59FeYR2HRLGXzAk

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> arr(n);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
        }
        int l = mx, r = INT_MAX;
        int ans;
        while (l <= r)
        {
            int cap = l + (r - l) / 2;
            int cnt = 1, sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (sum + arr[i] <= cap)
                    sum += arr[i];
                else
                {
                    cnt++;
                    sum = arr[i];
                }
            }
            if (cnt <= m)
            {
                ans = cap;
                r = cap - 1;
            }
            else
                l = cap + 1;
        }
        cout << ans << endl;
    }
    return 0;
}
