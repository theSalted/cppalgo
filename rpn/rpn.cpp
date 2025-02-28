
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for (auto token : tokens) {
            if (token == "+") {
                int rhs = stk.top();
                stk.pop();
                int lhs = stk.top();
                stk.pop();
                stk.push(lhs + rhs);
                continue;
            }
            if (token == "-") {
                int rhs = stk.top();
                stk.pop();
                int lhs = stk.top();
                stk.pop();
                stk.push(lhs - rhs);
                continue;
            }
            if (token == "*") {
                int rhs = stk.top();
                stk.pop();
                int lhs = stk.top();
                stk.pop();
                stk.push(lhs * rhs);
                continue;
            }
            if (token == "/") {
                int rhs = stk.top();
                stk.pop();
                int lhs = stk.top();
                stk.pop();
                stk.push(lhs / rhs);
                continue;
            }

            int num = stoi(token);
            stk.push(num);
        }

        return stk.top();
    }
};

