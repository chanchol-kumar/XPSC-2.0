//problem link : https://codeforces.com/problemset/problem/1855/A

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
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
 
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == arr[i])
                cnt++;
        }
        if (cnt % 2 == 1)
            cnt++;
        cout << cnt / 2 << endl;
    }
    return 0;
}
