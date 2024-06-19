class Solution {
public:
   
      string frequencySort(string s) {
        
        unordered_map<char,int> mp;
        int n= s.size();
        string result="";
        for(auto & c: s)
        {
            mp[c]++;

        }
        vector<pair<char,int>>vmap(mp.begin(),mp.end());
        // using lambda function
        sort(vmap.begin(), vmap.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second; // Sort by frequency (second element) in descending order
        });
        for(auto & x: vmap)
        {
            result+=string(x.second,x.first);
        }
        return result;
    }
};