//problem link : https://codeforces.com/problemset/problem/1853/A

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
        int diff = 1e9;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i > 0)
            {
                diff = min(arr[i] - arr[i - 1], diff);
                flag &= arr[i] >= arr[i - 1];
            }
        }
        if (!flag)
        {
            cout << 0 << endl;
            continue;
        }
        cout << diff/2 + 1 << endl;
    }
    return 0;
}
