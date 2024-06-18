class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int st=1,end = n-2,mid;
        if(n == 1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];
        while(st <= end)
        {
            mid = st + ( end - st)/2;
           
            if (nums[mid] != nums[mid -1] && nums[mid] != nums[mid + 1]) return nums[mid];
            
            else if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || (mid % 2 ==0 && nums[mid] == nums[mid +1]))
            {
                // checking ele. at even odd same or not
                    st= mid +1; // eliminate left half

            }  
            
            else
            {
                
                    end = mid -1;   // eliminate right half
            }
        }
        return -1;
    }
};