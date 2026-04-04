class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solver(n,dp);  
    }
    int solver(int n, vector<int>& dp){
       if (n == 0 || n == 1) {
            return 1;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        dp[n] = solver(n - 1, dp) + solver(n - 2, dp);
        return dp[n];
    }
};