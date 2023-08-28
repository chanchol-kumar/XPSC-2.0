// problem link : https://codeforces.com/contest/1864/problem/A

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
        int a, b, n;
        cin >> a >> b >> n;
        int arr[n];
        arr[0] = a;
        arr[n - 1] = b;
        int x = arr[n - 1];

        int j = 1;
        for (int i = n - 2; i > 0; i--)
        {
            arr[i] = x - j;
            x = arr[i];
            j++;
        }

        vector<int> v;
        bool flag = true;
        for (int i = 1; i < n; i++)
            v.push_back(arr[i] - arr[i - 1]);

        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] < v[i - 1])
                flag = false;
            else
                break;
        }

        if (!flag)
        {
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
            cout << "-1\n";
    }
}
