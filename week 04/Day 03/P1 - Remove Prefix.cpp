    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
     
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
            vector<int>arr(n);
     
            for(int i=0; i<n; i++)
                cin>>arr[i];
            reverse(arr.begin(),arr.end());
     
            set<int>s;
            for(int i=0; i<n; i++)
            {
                s.insert(arr[i]);
                if(s.size()!=i+1)
                {
                    cout<<n-s.size()<<endl;
                    break;
                }
            }
            if(s.size()==n)
                cout<<0<<endl;
        }     
        return 0;
    }
