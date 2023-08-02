//problem link : https://codeforces.com/contest/1807/problem/G1

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
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
 
        sort(arr.begin(), arr.end());
        if (arr[0] != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        ll sum = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] <= sum)
                sum += arr[i];
            else
            {
                sum = -1;
                break;
            }
        }
        if (sum == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
