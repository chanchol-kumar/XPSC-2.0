// problem link : https://codeforces.com/contest/1864/problem/C

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
        int x;
        cin >> x;
        vector<int> arr;

        int now = 1;
        while (now <= x)
        {
            arr.push_back(now);
            now *= 2;
        }
        if (arr.back() != now)
        {
            int diff = x - arr.back();
            for (int i = 31; i >= 0; i--)
            {
                if (diff & (1 << i))
                    arr.push_back(arr.back() + (1 << i));
            }
        }
        cout << arr.size() << "\n";
        reverse(arr.begin(), arr.end());
        for (int it : arr)
            cout << it << " ";
        cout << "\n";
    }
    return 0;
}
