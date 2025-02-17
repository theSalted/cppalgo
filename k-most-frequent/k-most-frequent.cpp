
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        for (auto num : nums) {
            map[num]++;
        }

        // I didn't figure out this part myself
        // According to chatgpt I can also use priority_queue here
        vector<pair<int, int>> arr;
        for (const auto& p : map) {
            arr.push_back({p.second, p.first});
        }

        // rbegin: Return reverse iterator to reverse beginning
        // rend: A reverse iterator to the reverse end of the sequence container
        sort(arr.rbegin(), arr.rend());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(arr[i].second);
        }

        return result;
    }
};

