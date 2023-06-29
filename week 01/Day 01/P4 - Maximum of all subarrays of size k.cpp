//problem link : https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
    vector<int> res;
    deque<int> dq;
    
    for (int i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    
    for (int i = k; i < n; i++) {
        res.push_back(arr[dq.front()]);
        while (!dq.empty() && dq.front() <= i-k)
            dq.pop_front();
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    
    res.push_back(arr[dq.front()]);
    
    return res;
}
