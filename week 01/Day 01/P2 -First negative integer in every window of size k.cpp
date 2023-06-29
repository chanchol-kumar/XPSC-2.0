//problem link : https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k) {
    int i=0,j=0;
    queue<int>q;
    vector<long long> result;
    while(j<n)
    {
        if(arr[j]<0)
            q.push(arr[j]);

        if(j<k-1) j++;
        else
        {
            if(q.empty())
                result.push_back(0);

            else 
                result.push_back(q.front());

            if(arr[i]<0) 
                q.pop();
            i++;
            j++;
        }
    }    
    return result;
}
