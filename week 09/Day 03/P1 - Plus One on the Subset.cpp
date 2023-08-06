//problem link : https://codeforces.com/problemset/problem/1624/A

#include<bits/stdc++.h>
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += arr[i + 1] - arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
 
