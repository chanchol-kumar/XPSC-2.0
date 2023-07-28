//problem link : https://www.codechef.com/problems/CONSTR

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
        string str;
        cin>>str;
        for(int i=0; i<n-2; i++)
        {
            if(str[i] == str[i+1] && str[i] == str[i+2])
            {
                str.erase(i+1,2);
                i--;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
