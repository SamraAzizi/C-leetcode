class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size(), best = INT_MAX;
        for(int k = l; k <= r; ++k){
            int s = accumulate(nums.begin(), nums.begin() + k -1, 0);