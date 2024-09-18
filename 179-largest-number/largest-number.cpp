class Solution {
    static bool comparator( string a , string b)
    {
        return a+b > b+a;
    }
public:
    
    string largestNumber(vector<int>& nums) {
        vector<string> s;
        for(int x:nums)
            s.push_back(to_string(x));

        int n= nums.size();   
        sort(s.begin(),s.end(),comparator);
        if(s[0] == "0") return "0";
        string sum="";
        for(int i=0;i<n;i++)
            sum+=s[i];
        return sum;
        
    }
};