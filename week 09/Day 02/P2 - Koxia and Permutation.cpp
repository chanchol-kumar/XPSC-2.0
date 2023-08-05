//problem link : https://codeforces.com/problemset/problem/1770/B

#include <bits/stdc++.h>
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
        vector<int> arr(n);
        int l = 1, r = n;
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
                arr[i] = l++;
            else
                arr[i] = r--;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
