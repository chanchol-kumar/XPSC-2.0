//problem link : https://codeforces.com/contest/1772/problem/C

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int j=1,d=1;
        for(int i=1; i<=k; i++)
        {
            cout<<j<<" ";
            if(n-(j+d)>=(k-i-1))
            {
                j+=d;
                d++;
            }
            else
                j++;
        }
        cout<<endl;
    }

    return 0;
}
