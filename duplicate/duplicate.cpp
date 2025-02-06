class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> numHashSet;
        for (int num : nums) {
            if (numHashSet.count(num) > 0) {
                return true;
            }
            numHashSet.insert(num);
        }
        return false;
    }
};

