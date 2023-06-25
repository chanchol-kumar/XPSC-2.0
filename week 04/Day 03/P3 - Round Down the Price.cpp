    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
     
    #define endl '\n';
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     
    int main()
    {
        optimize();
        int t;
        cin>>t;
        while(t--)
        {
            ll n,sum=0,i=0;
            cin>>n;
     
            while(n>=pow(10,i))
            {
                sum =n-pow(10,i);
                i++;
            }
            cout<<sum<<endl;
        }  
        return 0;
    }
