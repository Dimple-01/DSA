class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];  // assume first element as prefix
        int n= strs.size();
        if(n == 1) return prefix;
        for(int i=1;i<n;i++)
        {
            while(strs[i].find(prefix) != 0)  // if prefix is not found in ith element
            {
                prefix = prefix.substr(0,prefix.size()-1); // shorten the prefix from last
                if(prefix.empty())
                {
                    return "";
                }
            }
        }
        return prefix;
    }
};