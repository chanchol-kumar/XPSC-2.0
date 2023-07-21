//problem link : https://codeforces.com/problemset/problem/1527/A

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
        ll n;
        cin >> n;
        ll cnt=0;
        while(n!=0)
        {
            cnt++;
            n=n/2;
        }
        cout << (1<<(cnt-1))-1 << endl;
    }
 
    return 0;
}
