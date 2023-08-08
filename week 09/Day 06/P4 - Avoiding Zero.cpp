//problem link : https://codeforces.com/problemset/problem/1427/A

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

        int sum = 0, neg = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 0)
                pos += arr[i];
            else
                neg += (arr[i] * -1);

            sum += arr[i];
        }
        sort(arr, arr + n);
        if (sum == 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            if (pos > neg)
            {
                for (int i = n - 1; i >= 0; i--)
                    cout << arr[i] << " ";
            }
            else
            {
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
