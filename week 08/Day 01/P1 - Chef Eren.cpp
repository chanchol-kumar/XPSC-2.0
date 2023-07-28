//problem link : https://www.codechef.com/problems/CHEFEREN

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
        int a,b,c;
        cin>>a>>b>>c;

        if(a%2==0)
            cout<<(a/2)*b+(a/2)*c<<endl;
        else
            cout<<(a/2)*b+((a/2)+1)*c<<endl;
    }
    return 0;
}
