//problem link : https://codeforces.com/problemset/problem/1821/B

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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        int diff_l = -1, diff_r = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] != arr2[j])
            {
                diff_r = j;
                if (diff_l == -1)
                    diff_l = j;
            }
        }
        while (diff_l > 0 && arr2[diff_l - 1] <= arr2[diff_l])
            diff_l--;
        while (diff_r < n - 1 && arr2[diff_r + 1] >= arr2[diff_r])
            diff_r++;

        cout << diff_l + 1 << " " << diff_r + 1 << endl;
    }
    return 0;
}
