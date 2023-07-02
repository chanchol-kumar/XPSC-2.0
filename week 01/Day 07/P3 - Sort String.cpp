//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define endl '\n';
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int n;
    cin>>n;
    
    int arr[123]={};
    for(int i=0; i<n; i++)
    {
        char x;
        cin>>x;
        arr[x]++;
    }
    for(int i=0; i<123; i++)
    {
        if(arr[i]!=0)
        {
            while(arr[i]--)
                cout<<(char)(i);
        }
    }
    cout<<"\n";
    return 0;
}
