class Solution {
public:
    // time complexity is (mlogn)
    void sortColors(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for(auto & x: nums )
        {
            mp[x]++;
        }
        int k=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<mp[i];j++)
                nums[k++]=i;
        }
       
       
        
    }
};