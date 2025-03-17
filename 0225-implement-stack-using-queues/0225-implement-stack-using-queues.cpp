class MyStack {
public:
queue<int>q;
    MyStack(){
        
    }
    void push(int x){
        q.push(x);
        int n=q.size()-1;
        for(int i=0;i<n;++i){
            int a=q.front();
            q.pop();
            q.push(a);
        }
    }
    int pop(){
        int m=q.front();
        q.pop();
        return m;
    }
    int top(){
        return q.front();
    }
    bool empty(){
        return q.empty();
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