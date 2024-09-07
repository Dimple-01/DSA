class Solution {
public:
    int maxProfit(vector<int>& arr) {
        // int n= arr.size();
        // int maxdiffval=INT_MIN;
        // int idx=0;
        // int j;
        // int maxi=INT_MIN;

        // for(int i=0;i<n;i++)
        // {
        //     for(j=i+1;j<n;j++)
        //     {
        //         if( arr[j] > arr[i])
        //         {
        //             maxi= max(maxi,arr[j]);
        //             idx=j;
        //         }    
        //     }

        //     if( j != n)
        //     {
           
        //         if(arr[idx]- arr[i] > 0)
        //         {
        //             int diffval=arr[idx]- arr[i];
        //             maxdiffval= max(maxdiffval,diffval); 
        //         }
        //     }
        // }
        // return maxdiffval;
        
        int mini=arr[0];
        int cost=0;
        int profit=0;

        for(int i=1;i<arr.size();i++)
        {
            cost= arr[i] - mini;
            profit=max(cost, profit);
            mini= min(arr[i],mini);
        }
        return profit;
    }
};