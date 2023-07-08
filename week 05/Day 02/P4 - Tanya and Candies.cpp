//problem link : https://codeforces.com/contest/1118/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> a(n);
 
    int ePref = 0, oPref = 0, eSuf = 0, oSuf = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
            eSuf += a[i];
        else
            oSuf += a[i];
    }
 
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            eSuf -= a[i];
        else
            oSuf -= a[i];
 
        if (ePref + oSuf == oPref + eSuf)
            ans++;
 
        if (i % 2 == 0)
            ePref += a[i];
        else
            oPref += a[i];
    }
    cout << ans << endl;
 
    return 0;
}
