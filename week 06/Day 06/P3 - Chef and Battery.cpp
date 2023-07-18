//problem link : https://www.codechef.com/problems/FIFTYPE

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
        int n,cnt=0;
        cin>>n;
        while(1)
        {
            if(n==50)
                break;
            else if(n<50)
            {
                cnt++;
                n+=2;
            }
            else
            {
                cnt++;
                n-=3;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}
