//problem link : https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

	int search(string pat, string txt) {
        int i=0,j=0,k=pat.size(),sum=0;
    
        int fr1[26] = {0};
        int fr2[26] = {0};
    
        for(char c:pat)
        {
            fr1[c-'a']++;
        }
    
        while(j<txt.size())
        {
            fr2[txt[j]-'a']++;
            if(j<k-1)
            {
                j++;
            }
            else
            {
                bool flag = true;
                for(int v=0; v<26; v++)
                {
                    if(fr1[v]!=fr2[v])
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag)
                    sum++;
                    
                fr2[txt[i]-'a']--;
    
                i++;
                j++;
            }
        }
        return sum;
	}
