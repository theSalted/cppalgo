class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> lut;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            int d = target - n;
            if (lut.find(d) != lut.end()) {
                result = {lut[d], i};
                return result;
            }
            lut[n] = i;
        }

        return result;
    }
};

