//problem link : https://www.codechef.com/problems/TOP10

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
        cin>>n;

        if(n<=10)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
