//problem link : https://www.codechef.com/problems/ANTIPALINDR

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
        ll n,even=0,odd=0;
        cin >> n;
        string s;
        cin >> s;
        map<char, ll> cnt;
        for(ll i=0;i<n;i++)
            cnt[s[i]]++;

        for (auto it:cnt)
        {
            if (it.second % 2 == 0)
                even++;
            else
                odd++;
        }

        if(odd>1)
            cout << "0" << endl;
        else if(odd==1)
        {
            if (even==0)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
        else
            cout << "1" << endl;
    }

    return 0;
}
