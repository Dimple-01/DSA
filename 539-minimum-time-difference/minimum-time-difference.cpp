class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n= timePoints.size();
        vector<int> ans;
        string hours="", mins="";
        int tottime=0;
        for(int i=0;i<n;i++)
        {
            tottime=0;
            string target= timePoints[i];
            
            string hours= target.substr(0,2);
            string mins = target.substr(3,5);
            tottime= stoi(hours) * 60 + stoi( mins); 
            ans.push_back(tottime);
        }
        sort(ans.begin(),ans.end());
        int mini= INT_MAX;
        for( int i=1;i<n;i++)
        {
            mini= min( mini, ( ans[i] - ans[i-1]));
        }
       int diff= 24 * 60 - ans[n-1] + ans[0];
       int finalans= min( mini, diff); 
        return finalans;
        
    }
};