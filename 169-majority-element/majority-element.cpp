class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=-1,cnt=0;
        int n= nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(cnt == 0)
            {
                ele= nums[i];
               
            }
            if(ele== nums[i])
            {
                cnt++;
            }
            else
            cnt--;
        }
        // int count=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(ele== nums[i])
        //     {
        //         count++;
        //     }
        // }
        // if(count > n/2) return ele;
        return ele;
        
        
    }
};