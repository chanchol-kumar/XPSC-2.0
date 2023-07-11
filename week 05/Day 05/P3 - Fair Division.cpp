//problem link : https://codeforces.com/contest/1472/problem/B

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
        int n, one=0, two = 0, sum = 0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            sum+=x;
            if(x==1)one++;
            else two++;
        }
        if(sum%2!=0)
            cout<<"NO"<<endl;
        else if(one==0 and two%2!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
