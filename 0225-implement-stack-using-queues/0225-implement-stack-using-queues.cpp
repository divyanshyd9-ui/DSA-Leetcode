class MyStack {
    queue<int> s;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        int n=s.size();
        for(int i=0;i<n-1;i++){
            s.push(s.front());
            s.pop();
        }
        
    }
    
    int pop() {
       
        int x=s.front();
        s.pop();
        return x;
        
    }
    
    int top() {return s.front();
        
    }
    
    bool empty() {
        return s.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */