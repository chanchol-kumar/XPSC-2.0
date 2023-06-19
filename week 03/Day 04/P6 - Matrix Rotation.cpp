//problem link : https://codeforces.com/contest/1772/problem/B

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

int main()
{
    optimize()
    int t,x;
    cin>>t;

    while(t--)
    {
        int arr1[5],arr2[5];
        for(int i=0; i<4; i++)
        {
            cin>>arr1[i];
            arr2[i]=arr1[i];
        }
        sort(arr2, arr2+ 4);
        if((arr1[0]==arr2[0] && arr1[3]==arr2[3]) || (arr1[1]==arr2[0] && arr1[2]==arr2[3]) ||(arr1[3]==arr2[0] && arr1[0]==arr2[3]) || (arr1[2]==arr2[0] && arr1[1]==arr2[3]))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
