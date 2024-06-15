class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        int mid;
        while(st<=end)
        {
            mid=st + (end - st)/2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                st=st+1;
            else
                end-=1;
        }
        return -1;
    }
};