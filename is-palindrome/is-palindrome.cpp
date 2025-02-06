class Solution {
public:
    bool isPalindrome(string s) {
        // Transform to lowercases
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        // Two pointer palindrome
        int lhs = 0, rhs = s.size() - 1;
        while (lhs < rhs) {
            char lsh_s = s[lhs];
            char rhs_s = s[rhs];

            // Skip if non alpha
            if (!isalnum(lsh_s)) {
                lhs++;
                continue;
            }
            if (!isalnum(rhs_s)) {
                rhs--;
                continue;
            }


            if (lsh_s != rhs_s) {
                return false;
            }
            lhs++;
            rhs--;
        }

        return true;
    }
};


