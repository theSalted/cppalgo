class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());
        int longest = 0;

        for (int num : nums) {
            if (nums_set.find(num - 1) == nums_set.end()) {
                cout << num << endl;
                int length = 1;
                while (nums_set.find(num + length) != nums_set.end()) {
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};

