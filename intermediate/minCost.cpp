class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<bitset<1024>> dp(n);  // dp[j][x]: XOR x can reach column j of the row above
        dp[0][0] = 1;
        for (auto& row : grid)
            for (int j = 0; j < n; j++) {