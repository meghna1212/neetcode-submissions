class MinStack {
    stack<int> st1, min_stack;
public:
    MinStack() {
            
    }
    
    void push(int val) {

        st1.push(val);

        if(min_stack.empty())
            min_stack.push(val);
        else
        {
            if(val<=min_stack.top())
                min_stack.push(val);
        }
    }
    
    void pop() {

        int num = st1.top();
        st1.pop();

        if(num==min_stack.top())
            min_stack.pop();        
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
