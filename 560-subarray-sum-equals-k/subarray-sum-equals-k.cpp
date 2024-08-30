class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int val=k;
        int n= nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {    
                // for(int k=i;k<j;k++)
                // {
                    sum +=nums[j];  
                     if(sum == val)
                    cnt++;                 
                // {               
            }
           
        }
        return cnt;
        
    }
};