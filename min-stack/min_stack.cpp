
class MinStack {
public:
    stack<int> _stack;
    std::stack<int> minStack;

    MinStack() {
        
    }
    
    void push(int val) {
        _stack.push(val);
        val = std::min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        _stack.pop();
        return minStack.pop();

    }
    
    int top() {
        return _stack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

