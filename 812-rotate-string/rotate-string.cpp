class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        int n=s.size();
        int m=goal.size();
        string dummy(n,'a');
        for(int k=1;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                dummy[(i+ k) % n]=s[i];
            }
            if(dummy == goal)
                return true;
        }
        return false;
    }
};