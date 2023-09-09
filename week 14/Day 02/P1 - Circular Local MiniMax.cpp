//problem link : https://codeforces.com/problemset/problem/1685/A

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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        vector<int> v;
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0, j = n / 2; i < n / 2; i++, j++)
        {
            v.push_back(arr[i]);
            v.push_back(arr[j]);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);
        bool flag = false;
        for (int i = 1; i < v.size() - 1; i++)
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                continue;
            else if (v[i] < v[i - 1] && v[i] < v[i + 1])
                continue;
            else
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
