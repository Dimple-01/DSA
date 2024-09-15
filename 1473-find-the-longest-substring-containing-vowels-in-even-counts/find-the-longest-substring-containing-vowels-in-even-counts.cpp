class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<string,int> mp;
        vector<int> v(5,0);
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if( s[i] == 'a')
            {
                v[0]= v[0]^1;
            }
            else if (s[i]=='e') v[1]=v[1]^1;
            else if ( s[i] == 'i') v[2]=v[2]^1;
            else if (s[i] == 'o') v[3]=v[3]^1;
            else if(s[i]=='u') v[4]=v[4]^1;

            string currstate="00000";
            mp[currstate]=-1;

            currstate="";
            for(int k=0;k<5;k++)
            {
                currstate+=to_string(v[k]);
            }
            
            if(mp.find(currstate) != mp.end())
            {
                res=max(res, i- mp[currstate]);
            }
            else
            mp[currstate]=i;
        }
        return res;

        
    }
};