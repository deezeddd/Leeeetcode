class MyStack {
public:
    int size;
    int qfrnt = 0;
    int rear = 0;
    queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        int s= q.size();
        q.push(x);
       for(int i=0 ; i < s; i++){
           q.push(q.front());
           q.pop();
       }
    }
    
    int pop() {
        // q.front();
        int ele = q.front();
         q.pop();
        return ele;
    }
    
    int top() {
        if(q.empty())
            return -1; 
        return q.front();
    }
    
    bool empty() {
        //which queue?
        if(!q.empty())
            return false; 
        else 
            return true;
        
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