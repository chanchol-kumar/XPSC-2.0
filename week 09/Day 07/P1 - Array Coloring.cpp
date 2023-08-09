//problem link : https://codeforces.com/contest/1857/problem/A

    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
     
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     
    int main()
    {
        optimize();
        int t;
        cin >> t;
        while (t--)
        {
            int n,sum=0;
            cin >> n;
            vector<int> arr(n);
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                sum += arr[i];
            }
            if (sum % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        return 0;
    }
