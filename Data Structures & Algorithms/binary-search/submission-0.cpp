class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int curr = nums[mid];
            
            if (curr > target) {
                hi = mid - 1;
            } else if (curr < target) {
                lo = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
};
