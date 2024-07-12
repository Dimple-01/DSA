class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxlen=0,len=0;
        int n= s.size();
        vector<int>mp(256,-1);
        while(r < n)
        {
            if(mp[s[r]] != -1)
            {
                if(l <= mp[s[r]]) // <= important for same continous same value
                {
                    l=mp[s[r]] + 1;
                }
            }
            len= r-l+1;
            
            mp[s[r]]=r;
            maxlen= max(len,maxlen);
            r++;
        }
        return maxlen;
        
    }
};