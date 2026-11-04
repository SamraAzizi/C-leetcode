class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        long long result = 0;
        for(int x : nums){
            result += (mx - x);
        }
        return result;
        
    }
};