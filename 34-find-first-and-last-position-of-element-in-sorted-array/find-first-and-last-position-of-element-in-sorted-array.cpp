class Solution {
public:
    int firstocc (vector<int>& nums, int target )
    {
        int st=0, end= nums.size()-1;
        int mid,first=-1;
        
        while(st <= end)
        {
            mid=  st +( end - st)/2;
            if(nums[mid]== target)
            {
                first=mid;
                end=mid-1;
            }
            else if(nums[mid] < target)
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return first;
    }
    int lastocc (vector<int>& nums, int target )
    {
        int st=0, end= nums.size()-1;
        int mid,last=-1;
        
        while(st <= end)
        {
            mid=  st+( end - st)/2;
            if(nums[mid]== target)
            {
                last=mid;
                st=mid+1;
            }
            else if(nums[mid] < target)
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        ans.push_back(firstocc(nums,target));
        ans.push_back(lastocc(nums,target));
        return ans;
        
    }
};