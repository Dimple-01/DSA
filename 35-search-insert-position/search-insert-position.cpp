class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1,mid;
        int ans=nums.size();
        while(st<=end)
        {
            mid= st + ( end - st)/2;
            if(nums[mid] >= target)
            {
                ans= mid;
                end= mid -1;
            }
            else
            {
                st= mid + 1;
            }
        }
        return ans;
    }
};