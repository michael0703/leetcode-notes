class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if( cur == 1) {
            st1.push(x);
        } else {
            while(!st2.empty()){
                st1.push(st2.top());
                st2.pop();
            }
            st1.push(x);
            cur = 1;
        }
        printf("push\n");
    }
    
    int pop() {
        if (cur == 1) {
            printf("pop start\n");
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            cur = 2;
        }
        int x = st2.top();
        printf("x:%d\n",x);
        st2.pop();
        return x;
    }
    
    int peek() {
        if (cur == 1) {
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            cur = 2;
        }
        int x = st2.top();
        return x;
    }
    
    bool empty() {
        if(cur==1) return st1.empty();
        else return st2.empty();
    }
    int cur = 1;
    stack<int> st1;
    stack<int> st2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */