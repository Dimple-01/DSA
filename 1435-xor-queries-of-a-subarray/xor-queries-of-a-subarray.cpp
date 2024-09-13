class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int len= queries.size();
        vector<int>ans;
        int sum=0;
        for(int j=0;j<len;j++)
        {   sum=0;
            for(int i=queries[j][0];i<=queries[j][1];i++)
            {
                sum=sum ^arr[i];
            }
            ans.push_back(sum);
        }
        return ans;
        
    }
};