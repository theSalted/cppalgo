
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int last_visited;

        vector<vector<int>> result;

        for (int num : nums) {
            cout << num << endl;
            if (num == last_visited) continue;
            last_visited = num;
            int target = - num;
            auto r = twoSum(nums, target);
            if (r.size() == 2) {
                result.push_back({num, r[0], r[1]});
            }
        }

        return result;
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int tmp = target - nums[i];
            if (mp.count(tmp)) {
                return {tmp, nums[i]};
            }
            mp[nums[i]] = i;
        }

        return {};
    }
};

