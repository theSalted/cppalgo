
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Defind bounds
        int l = 0;
        int r = nums.size() - 1;


        while (l <= r) {
            int m = l + r;
            if (nums[m] > target) {
                r = m - 1;
            } else if (nums[m] < target) {
                l = m + 1;
            } else {
                return m;
            }
        }

        return -1;
    }
};
