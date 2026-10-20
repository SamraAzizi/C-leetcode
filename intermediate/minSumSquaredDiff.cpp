class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int> d(n);
        long long total = 0;
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            d[i] = abs(nums1[i] - nums2[i]);
            total += d[i];
            mx = max(mx, d[i]);
        }