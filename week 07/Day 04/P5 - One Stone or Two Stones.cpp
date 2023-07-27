//problem link : https://www.codechef.com/problems/ONEORTWO

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
        int a,b;
        cin>>a>>b;
        if(abs(a-b)>=2)
        {
            if(a>b)
                cout<<"CHEF"<<endl;
            else
                cout<<"CHEFINA"<<endl;
        }
        else if(a==b)
        {
            if(a%2==0)
                cout<<"CHEFINA"<<endl;
            else
                cout<<"CHEF"<<endl;
        }
        else if(abs(a-b)==1)
        {
            int mn = min(a,b);
            if(mn%2==0)
                cout<<"CHEFINA"<<endl;
            else
                cout<<"CHEF"<<endl;
        }
    }
    return 0;
}
