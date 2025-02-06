class Solution {
public:
    bool isAnagram(string s, string t) {
        auto s_char = getCharMap(s);
        auto t_char = getCharMap(t);
        return s_char == t_char;

    }

    unordered_map<char, int> getCharMap(string s) {
        unordered_map<char, int> char_map;
        for (char c : s) {
            char_map[c]++;
        }
        return char_map;
    }
};

