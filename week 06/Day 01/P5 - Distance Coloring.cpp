//problem link : https://www.codechef.com/problems/DISTANCECOLO

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
        const unsigned int MOD = 1e9+7;
        ll n,k,cnt=1;
        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            if(k>0)
            {
                cnt=(k*cnt)%MOD;
                k--;
            }
            else
                break;
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
