class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(auto & x: s)
        {
            mp2[x - 'a']++;
        }
        for(auto & y: t)
        {
            mp2[y - 'a']--;
            if(mp2[y - 'a'] < 0) return false;
       
           
        }
        
        return true;
      
    }
};