//problem link : https://acm.timus.ru/problem.aspx?space=1&num=1005

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = (1 << 30);
    for (int i = 0; i < (1 << n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                sum += arr[j];
            else
                sum -= arr[j];
        }
        ans = min(ans, abs(sum));
    }
    cout << ans << endl;
    return 0;
}
