//problem link : https://codeforces.com/problemset/problem/1537/A

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
        int n, x;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        if(sum < n)
            cout << "1\n";
        else
            cout << sum - n << "\n";
    }
    return 0;
}
 
