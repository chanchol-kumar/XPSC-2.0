//problem link : https://www.codechef.com/problems/MATDIF

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
        int a=1,b=2;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(a<=n*n)
                {
                    cout<<a<<" ";
                    a+=2;
                }
                else
                {
                    cout<<b<<" ";
                    b+=2;
                }
            }
            cout<<endl;;
        }
    }
    return 0;
}
