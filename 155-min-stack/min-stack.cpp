class MinStack {
    stack<int> m;
    stack<int> mstack;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(mstack.empty() || mstack.top() >= val) mstack.push(val);
        m.push(val);
    }
    
    void pop() {
        if(m.top() == mstack.top()) mstack.pop();
        m.pop();
    }
    
    int top() {
        return m.top();
    }
    
    int getMin() {
        return mstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */