class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int val =*max_element(nums.begin(),nums.end());
       int maxi=0;
       int len=0;
       for(int i=0;i<nums.size();i++)
       {
            if(nums[i]== val)
            {
                len++;
                maxi= max(maxi,len);
               
            }
            else
                len=0;  
       }
       return maxi;
    }
};