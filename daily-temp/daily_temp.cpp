
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> stk; // temp, index
        for (int i = 0; i < temperatures.size(); i++) {
            int t = temperatures[i];
            while(!stk.empty() && t > stk.top().first) {
                auto pair = stk.top();
                stk.pop();
                res[pair.second] = i - pair.second;
            }
            stk.push({t, i});
        }
        return res;
    }
};

