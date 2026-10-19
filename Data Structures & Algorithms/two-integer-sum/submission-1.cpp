class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int toTarget = target - nums[i];
            if (mp.find(toTarget) != mp.end()) {
                vector<int> ans{mp[toTarget], i};
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
