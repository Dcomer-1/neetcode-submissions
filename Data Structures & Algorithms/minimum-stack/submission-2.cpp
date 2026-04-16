class MinStack {
public:
    vector<int> mainStack;
    vector<int> minStack;
    MinStack() {
    }
    
    void push(int val) {
        mainStack.push_back(val);
        //check if minStack is empty and if val is less than the current min val
        val = min(val, minStack.empty() ? val : minStack.back());
        minStack.push_back(val);
    }
    
    void pop() {
        mainStack.pop_back();
        minStack.pop_back();
    }
    
    int top() {
        return mainStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
