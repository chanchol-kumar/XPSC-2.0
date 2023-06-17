//problem link : https://codeforces.com/contest/1692/problem/C

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin>>t;

    while(t--)
    {
        char arr[9][9];
        for(int i=1; i<=8; i++)
        {
            for(int j=1; j<=8; j++)
            {
                cin>>arr[i][j];
            }
        }

        for(int i=1; i<=6; i++)
        {
            int flag=0;
            for(int j=1; j<=6; j++)
            {
                if(arr[i][j]=='#' && arr[i][j+1]=='.'&& arr[i][j+2]=='#' )
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
    }
    return 0;
}
