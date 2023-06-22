//problem link : https://codeforces.com/contest/1741/problem/B

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
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

        if(n==3)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(n==5)
        {
            cout<<"5 4 1 2 3"<<endl;
            continue;
        }

        vector<int> arr(n+1);
        for(int i=1; i<=n; i++)
            arr[i]=(n-i+1);

        if(n%2==1)
            swap(arr[(n/2)],arr[(n/2)+1]);

        for(int i=1; i<=n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}
