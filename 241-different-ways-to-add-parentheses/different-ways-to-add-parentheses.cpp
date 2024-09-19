class Solution {
public:
vector<int> helper( string exp)
{
    vector<int>ans;
    for(int i=0;i<exp.size();i++)
    {
        if( exp[i] == '+' ||  exp[i] == '-' ||  exp[i] == '*' ||  exp[i] == '/')
        {
            vector<int> left = helper( exp.substr(0,i));
            vector<int> right = helper( exp.substr(i+1));
            for(int k=0;k< left.size();k++)
            {
                for(int j=0;j<right.size();j++)
                {
                    if( exp[i] == '+')
                    ans.push_back(left[k] + right[j]);
                    else if( exp[i] =='-')
                    ans.push_back(left[k] - right[j]);
                    else if( exp[i] =='*')
                    ans.push_back(left[k] * right[j]);  
                    else if( exp[i] =='/')
                    ans.push_back(left[k] / right[j]);
                }
            }
        }
       
    }
     if( ans.empty())
        {
            ans.push_back(stoi(exp));
        }
    return ans;
}
    vector<int> diffWaysToCompute(string expression) {
    
        return helper(expression);
        


        
    }
};