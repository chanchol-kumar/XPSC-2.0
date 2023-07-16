//problem link : https://www.codechef.com/problems/THREEAPFREE

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

        vector<int>arr(n);
        int flag = 0;

        for(int i=0; i<n; i++)
            cin>>arr[i];

        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if(abs(arr[i]-arr[j]) == abs(arr[j]-arr[k]))

                    {
                        flag = 1;
                        break;
                    }

                }
            }
        }

        if(flag)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }

    return 0;
}
