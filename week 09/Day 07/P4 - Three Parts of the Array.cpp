//problem link :

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll sum1 = 0, sum2 = 0, ans = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (sum1 < sum2)
        {
            sum1 += arr[l];
            l++;
        }
        else
        {
            sum2 += arr[r];
            r--;
        }
        if (sum1 == sum2)
            ans = sum1;
    }
    cout << ans << endl;
    return 0;
}
