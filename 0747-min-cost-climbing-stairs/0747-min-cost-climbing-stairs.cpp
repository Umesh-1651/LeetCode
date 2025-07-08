class Solution {
public:
    
    long long helper(vector<int> &cost,vector<int> &dp, int i) {
        
        if (i >= cost.size()) {
            return 0; 
        }
        if(dp[i]!= -1) return dp[i];
        long long cost_one_step = cost[i] + helper(cost,dp, i + 1);
        long long cost_two_steps = cost[i] + helper(cost,dp, i + 2);

        return dp[i] = min(cost_one_step, cost_two_steps);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        long long min_cost_from_0 = helper(cost,dp ,0);

        long long min_cost_from_1 = helper(cost,dp, 1);

        return static_cast<int>(min(min_cost_from_0, min_cost_from_1));
    }
};