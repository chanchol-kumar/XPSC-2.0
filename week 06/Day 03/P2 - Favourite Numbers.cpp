//problem link : https://www.codechef.com/problems/FAVOURITENUM

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

        if(n%2==0 && n%7==0)
            cout<<"Alice\n";
        else if(n%2==1 && n%9==0)
            cout<<"Bob\n";
        else
            cout<<"Charlie\n";
    }
    return 0;
}
