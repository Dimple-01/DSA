class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string str="";
        string result="";
        for(auto & x: s)
        {
            if(x == ' ')
            {
                if(str != "")
                {
                    v.push_back(str);
                    str="";
                }
                
                
            }
            else
            {
                str+=x;
            }
        }
        if(str !="")
        {
            v.push_back(str);
        }

        reverse(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
        {
            result+=v[i];
            if(i!= v.size()-1) result+=" ";
        }
        return result;
    }
};