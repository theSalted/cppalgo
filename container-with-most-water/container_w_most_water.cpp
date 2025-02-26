
class Solution {
public:
// Brute force
    int maxArea(vector<int>& heights) {
        int res = 0;
        for (int i = 0; i < heights.size(); i++) {
            for (int j = 0; j < heights.size(); j++) {
                res = max(res, min(heights[i], heights[j]) * (j - i));
            }   
        }
        return res;
    }
};

