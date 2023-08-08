//problem link : https://codeforces.com/contest/1784/problem/A

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int arr2[n];
        arr2[0] = 1;
        for (int i = 1; i < n; i++)
        {
            arr2[i] = min(arr2[i - 1] + 1, arr[i]);
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += arr[i] - arr2[i];
        }
        cout << ans << '\n';
    }

    return 0;
}

