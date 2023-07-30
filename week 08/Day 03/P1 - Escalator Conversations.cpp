//problem link : https://codeforces.com/contest/1851/problem/A

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
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = abs(arr[i] - h);
            if (arr[i] != 0 && arr[i] % k == 0 && arr[i] / k <= m - 1)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
