class Solution {
public:
    string largestOddNumber(string num) {
        int n= num.size()-1;
        string ans="";
        for(int i=n;i>=0;i--)
        {
            if((num[i] -'0')% 2 != 0)
            {
                ans= num.substr(0,i+1);
                break;
            }
        }
        return ans;
    }
};