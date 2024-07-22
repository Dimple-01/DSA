class Solution {
public:
    int SubarrayLessThanEqualgoal(vector<int>& nums, int goal)
    {
        if(goal < 0) return 0;
        int l=0,r=0,cnt=0;
        int n= nums.size();
        int sum=0;
        while(r < n)
        {
            sum+=nums[r];
            while(sum > goal)
            {
                sum-=nums[l];
                    l++;
            }
            
            cnt+=(r-l+1);
            r++;
            

        }
        return cnt;
    }
 
    

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if(goal < 0) return 0;
        return( SubarrayLessThanEqualgoal(nums,goal) - SubarrayLessThanEqualgoal(nums,goal-1));
        
        
    }
};