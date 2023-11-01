class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        
        if(minstk.empty() || minstk.top().first > val){
            minstk.push({val,1});
        }
        else if(minstk.top().first == val){
            minstk.top().second++;
        }
    }
    
    void pop() {
        
        if(stk.top() == minstk.top().first){
            
            minstk.top().second--;
            if(minstk.top().second == 0)
                minstk.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minstk.top().first;
    }
    
private:
    stack<int> stk;
    stack<pair<int, int>> minstk;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */