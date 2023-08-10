//problem link : https://codeforces.com/contest/1857/problem/C

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
        int x = n * (n - 1) / 2;
        int arr[x];
        for (int i = 0; i < x; i++)
            cin >> arr[i];
        sort(arr, arr + x);
        for (int i = 0; i < x; i += --n)
            cout << arr[i] << " ";
        cout << "1000000000\n";
    }
    return 0;
}
