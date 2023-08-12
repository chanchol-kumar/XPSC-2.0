//problem link : https://codeforces.com/contest/1592/problem/A

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
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end(), greater<>());

        if (arr[0] >= q)
            cout << "1\n";
        else if (arr[0] + arr[1] >= q)
            cout << "2\n";
        else
        {
            if (q % (arr[0] + arr[1]) == 0)
                cout << (q / (arr[0] + arr[1])) * 2 << "\n";
            else
                cout << (q / (arr[0] + arr[1])) * 2 + 1 << "\n";
        }
    }
    return 0;
}

