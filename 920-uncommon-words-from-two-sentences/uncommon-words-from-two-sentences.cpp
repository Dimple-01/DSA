class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>ans;
        string str="";
        int n= s1.size();
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++)
        {
            if( s1[i]==' ')
            {
                mp[str]++;
                str="";
            }
            else
            str+=s1[i];
        }
        mp[str]++;
        string str1="";
        for(int i=0;i<s2.size();i++)
        {      
               
            if( s2[i]==' ')
            {
                mp[str1]++;
                str1="";
            }
            else
            str1+=s2[i];
            
        }
        mp[str1]++;
        for(auto x: mp)
        {
            if(x.second == 1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};