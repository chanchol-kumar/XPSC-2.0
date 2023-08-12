//problem link : https://codeforces.com/contest/1602/problem/A

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
        string s;
        cin >> s;
        cout << *min_element(s.begin(), s.end()) << " ";
        s.erase(min_element(s.begin(), s.end()));
        cout << s << endl;
    }
    return 0;
}
