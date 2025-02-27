class Solution {
public:
    // I solved something just not rpn...
    int evalReverse(vector<string>& tokens) {
        int lhs = NULL;
        int rhs = NULL;
        
        for (auto token : tokens) {
            if (token == "+") {
                int temp = lhs + rhs;

                lhs = temp;
                rhs = NULL;
                continue;
            }
            
            if (token == "-") {
                int temp = lhs - rhs;
                lhs = temp;
                rhs = NULL;
                continue;
            }
            
            if (token == "*") {
                int temp = lhs * rhs;
                lhs = temp;
                rhs = NULL;
                continue;
            }

            if (token == "/") {
                int temp = lhs / rhs;
                lhs = temp;
                rhs = NULL;
                continue;
            }

            int num = stoi(token);

            if (lhs == NULL) {
                lhs = num;
                continue;
            }

            if (rhs == NULL) {
                rhs = num;
                continue;
            }
        }

        return lhs;
    }
};
