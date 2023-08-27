// problem link : https://codeforces.com/problemset/problem/1185/C1

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int N = 200100;

int st[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
        
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int cnt = 0;
        int tmp = arr[i];
        for (int j = 0; j <= 110; j++)
        {
            if (tmp + j * st[j] <= m)
            {
                cnt += st[j];
                tmp += j * st[j];
            }
            else
            {
                cnt += (m - tmp) / j;
                break;
            }
        }
        cout << i - 1 - cnt << " ";
        st[arr[i]]++;
    }
    cout << "\n";
    return 0;
}
