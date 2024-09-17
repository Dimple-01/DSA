class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        int n= words1.size();
        unordered_map<string, int> mp,mp1;
        for(int i=0;i<n;i++)
        {
            mp[words1[i]]++;
        }
       
        for(int i=0;i<words2.size();i++)
        {      
               
            mp1[words2[i]]++;
            
        }
       
        int cnt=0;
        for(auto x : mp)
        {
            if(x.second == 1 && mp1[x.first] == 1)
            {
                cnt++;
            }
        }
        return cnt;
    
        
    }
};