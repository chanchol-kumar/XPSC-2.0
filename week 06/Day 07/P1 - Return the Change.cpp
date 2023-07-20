//problem link : https://www.codechef.com/problems/RETURNCHANGE

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
        int x=n%10;
        if(x>=5)
            cout<<100-(n-x+10)<<endl;
        else
            cout<<100-(n-x)<<endl;
    }

    return 0;
}
