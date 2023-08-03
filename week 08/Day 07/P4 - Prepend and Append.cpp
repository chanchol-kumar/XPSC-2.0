//problem link : 

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
        int n, cnt = 0;
        cin >> n;
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        while (l < r && s[l] != s[r])
        {
            l++, r--, cnt += 2;
        }
        cout << n - cnt << endl;
    }
 
    return 0;
}
