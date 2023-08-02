//problem link : https://codeforces.com/contest/1807/problem/B

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
            cin >> arr[i];
 
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                even += arr[i];
            else
                odd += arr[i];
        }
        if (even > odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
