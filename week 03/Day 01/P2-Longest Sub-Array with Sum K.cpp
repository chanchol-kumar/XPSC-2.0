//problem link : https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

int lenOfLongSubarr(int A[],  int N, int K){
    unordered_map<int, int> mp;
    int sum=0, ans=0;

    for(int i=0; i<N; i++)
    {
        sum+=A[i];
        if(sum==K)
            ans=max(ans,i+1);

        if(mp.find(sum-K)!=mp.end())
        {
            int idx=mp[sum-K];
            ans=max(ans,i-idx);
        }

        if(mp.find(sum)==mp.end())
            mp[sum]=i;
    }
    return ans;
}

/**
  time complexity : O(N)
  space complexity : O(N)
*/
