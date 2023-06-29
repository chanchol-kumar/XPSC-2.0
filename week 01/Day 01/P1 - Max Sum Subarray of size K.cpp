//problem link : https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

long maximumSumSubarray(int k, vector<int> &arr , int n){
        long int mx =INT_MIN,sum=0;
        int i=0,j=0;
        
        while(j<n)
        {
            sum+=arr[j];
            if(j<k-1)
                j++;
            else
            {
                mx=max(mx,sum);
                sum -=arr[i];
                i++,j++;
            }
        }
        return mx;
}
