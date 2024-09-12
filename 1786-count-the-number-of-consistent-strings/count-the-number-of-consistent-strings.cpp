class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>s( allowed.begin(), allowed.end());
        int n= words.size();
        int cnt=0;
        bool flag;
        for(auto y: words)
        { flag= true;
            for(auto x: y)
            {
                if(s.find(x) == s.end()) 
                {
                    flag= false;
                    break;
                }
            }
            if( flag == true) cnt++;
            
        }
        
     
        return cnt;
    }
};