//problem link : https://codeforces.com/contest/1741/problem/A

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
        string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();

        char l1,l2;
        int x1=0,x2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]!='X')
                l1=a[i];
            else
                x1++;
        }
        for(int i=0; i<m; i++)
        {
            if(b[i]!='X')
                l2=b[i];
            else
                x2++;
        }

        if(l1==l2)
        {
            if(x1==x2 || l1=='M')
            {
                cout<<"="<<endl;
                continue;
            }
            if(l1=='S')
            {
                if(x1>x2)
                {
                    cout<<"<"<<endl;
                }
                else
                    cout<<">"<<endl;
            }
            else if(l1=='L')
            {
                if(x1>x2)
                {
                    cout<<">"<<endl;
                }
                else
                    cout<<"<"<<endl;
            }
            continue;
        }

        if(l1=='S')
        {
            cout<<"<"<<endl;
        }
        else if(l1=='M' && l2=='S')
        {
            cout<<">"<<endl;
        }
        else if(l1=='M' && l2=='L')
        {
            cout<<"<"<<endl;
        }
        else if(l1=='L')
            cout<<">"<<endl;
    }

    return 0;
}
