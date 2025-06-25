class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp = prices;
        if (prices.size() < 2) return 0;
        dp[0] = prices[0];
        for(int i = 1; i < prices.size(); ++i) {
            dp[i] = min(dp[i-1],prices[i]);
        }
        int ans = 0;
        for(int i = 1; i < prices.size(); ++i) {
            ans = max(ans, prices[i]-dp[i-1]);
        }
        return ans;
    }
};