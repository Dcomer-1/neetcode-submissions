class MinStack {
public:
    vector<int> minStack;
    MinStack() {
    }
    
    void push(int val) {
        minStack.push_back(val);
    }
    
    void pop() {
        minStack.pop_back();
    }
    
    int top() {
        return minStack.back();
    }
    
    int getMin() {
        int min = minStack[0];
        for(int i = 0; i < minStack.size(); i++){
            if(minStack[i] < min){
                min = minStack[i];
            }
        }
        return min;
    }
};
