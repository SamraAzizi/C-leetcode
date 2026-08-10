class Solution{
    public:
    int maxSubArrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i =0, j=0, n=nums.size();
        int res = 0;
        while(j<n){
            m[nums[j]]++;
            while(mp.size()>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                i++;
            }
            res = max(res, j-i+1);
            j++;        

        }
        return res;
    }
}