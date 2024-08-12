class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int ii=0;ii< nums.size();ii++)
        {
            for(int i=ii+1;i<nums.size();i++)
            {
                if((nums[ii] + nums[i])== target)
                {
                
                    ans.push_back(ii);
                    ans.push_back(i);
                    return ans;
                }
            }
        }
        return ans;
        
    }
};