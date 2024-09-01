class Solution {
public:
int memo(vector<int> &dp,int n)
{
    if( n==2 || n==1) return n;
    if(dp[n] != -1) return dp[n];
    dp[n-1]= memo(dp,n-1); 
    dp[n-2]= memo(dp,n-2);
    return dp[n-1] + dp[n-2];
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return memo(dp,n);
        
    }
};