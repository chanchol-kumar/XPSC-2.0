//problem link : https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int n = s.size();
        int freq[26] = {0};
        int unq=0, ans=-1;
        int i=0, j=0;

        while(j<n)
        {
            if(freq[s[j]-'a'] == 0)
                unq++;
            freq[s[j]-'a']++;

            if(unq>k)
            {
                while (unq > k)
                {
                    freq[s[i]-'a']--;
                    if (freq[s[i]-'a'] == 0)
                        unq--;
                    i++;
                }
            }
            if (unq == k)
                ans = max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};


/**
    time complexity : O(n)
    space complexity : O(1)
*/
